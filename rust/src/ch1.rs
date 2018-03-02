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
    let mut l = 0;
    let mut r = 0;
    for x in arr {
        if let Some(&ll) = left.get(l) {

        } else if let Some(&rr) = right.get(r) {
            r += 1;
            *x = rr;
        }
        match (left.get(l), right.get(r)) {
            (Some(&ll), Some(&rr)) => {
                if ll < rr {
                    l += 1;
                    *x = ll;
                } else {
                    r += 1;
                    *x = rr;
                }
            }
            (Some(&ll), None) => {
                l += 1;
                *x = ll;
            }
            (None, Some(&rr)) => {
                r += 1;
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