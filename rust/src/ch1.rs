/// Sorts a list via insertion sort
///
/// Runs in O(n^2).
pub fn insertion_sort<T : Ord>(arr: &mut [T]) {
    for i in 0..arr.len() {
        for j in (0..i).rev() {
            if arr[j] >= arr[j + 1] {
                arr.swap(j, j + 1);
            } else {
                break;
            }
        }
    }
}

/// Sorts a list via insertion sort, in descending order.
///
/// Runs in O(n^2)
pub fn dec_insertion_sort<T: Ord>(arr: &mut [T]) {
    for i in 0..arr.len() {
        for j in (0..i).rev() {
            if arr[j] <= arr[j + 1] {
                arr.swap(j, j + 1);
            } else {
                break;
            }
        }
    }
}

pub fn linear_search<T : Eq>(el: &T, a: &[T]) -> Option<usize> {
    for (i, v) in a.iter().enumerate() {
        if el == v {
            return Some(i);
        }
    }
    None
}


fn merge<T>(arr: &mut [T], left: &[T], right: &[T])
    where T : Ord, T : Copy
{
    let mut left = left.iter().peekable();
    let mut right = right.iter().peekable();
    for x in arr {
        match (left.peek(), right.peek()) {
            (Some(&&ll), Some(&&rr)) => {
                if ll < rr {
                    left.next();
                    *x = ll;
                } else {
                    right.next();
                    *x = rr;
                }
            }
            (Some(&&ll), None) => {
                left.next();
                *x = ll;
            }
            (None, Some(&&rr)) => {
                right.next();
                *x = rr;
            }
            (None, None) => {}
        }
    }
}

/// Sorts a list via merge_sort
///
/// Runs in O(nlg(n)), and doesn't employ recursion.
pub fn merge_sort<T>(arr: &mut [T])
    where T : Ord, T : Copy
{
    let mut chunk_size = 1;
    while chunk_size <= arr.len() {
        for chunk in arr.chunks_mut(chunk_size * 2) {
            let mid_point = if chunk_size < chunk.len() {
                chunk_size
            } else {
                chunk.len() / 2
            };
            let mut chunk_copy = chunk.to_owned();
            let (left, right) = chunk_copy.split_at(mid_point);
            merge(chunk, left, right);
        }
        chunk_size *= 2;
    }
}

/// Sorts by running insertion sort on chunks of size usize, then applies merge sort.
pub fn insert_and_merge_sort<T>(arr: &mut [T], chunk_size: usize)
    where T : Ord, T : Copy
{
    let mut chunk_size = chunk_size;
    for chunk in arr.chunks_mut(chunk_size) {
        insertion_sort(chunk);
    }
    while chunk_size <= arr.len() {
        for chunk in arr.chunks_mut(chunk_size * 2) {
            let mid_point = if chunk_size < chunk.len() {
                chunk_size
            } else {
                chunk.len() / 2
            };
            let mut chunk_copy = chunk.to_owned();
            let (left, right) = chunk_copy.split_at(mid_point);
            merge(chunk, left, right);
        }
        chunk_size *= 2;
    }
}

pub fn bubble_sort<T : PartialOrd>(arr: &mut [T]) {
    for i in 1..arr.len()  {
        for j in (i..arr.len()).rev() {
            if arr[j] < arr[j - 1] {
                arr.swap(j, j - 1);
            }
        }
    }
}

fn naive_horner(x: i32, coefficients: &[i32]) -> i32 {
    let mut sum = 0;
    for (i, a) in coefficients.iter().enumerate() {
        let mut xk = 1;
        for _ in 0..i {
            xk *= x;
        }
        sum += a * xk;
    }
    sum
}