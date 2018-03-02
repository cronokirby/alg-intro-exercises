extern crate algintro;
use algintro::ch1::*;


#[test]
fn test_inc_insertion_sort() {
    let mut arr: [i32; 0] = [];
    insertion_sort(&mut arr);
    assert_eq!(arr, []);
    // testing with multiple elements
    let mut arr2 = [3, 2, 1];
    let r2: Vec<_> = (1..4).collect();
    insertion_sort(&mut arr2);
    assert_eq!(r2, arr2);
    // testing with a sorted list
    let mut arr3: Vec<_> = (1..10).collect();
    insertion_sort(&mut arr3);
    assert_eq!(arr3, arr3);
}

#[test]
fn test_dec_insertion_sort() {
    let mut arr: Vec<_> = (1..10).collect();
    let r: Vec<_> = (1..10).rev().collect();
    dec_insertion_sort(&mut arr);
    assert_eq!(arr, r);
}

#[test]
fn test_linear_search() {
    let arr = [1, 2, 3];
    assert_eq!(Some(0), linear_search(&1, &arr));
    assert_eq!(None, linear_search(&10, &arr));
}

#[test]
fn merge_sort_test() {
    let mut arr = [5, 3, 4, 2, 1];
    let r: Vec<_> = (1..6).collect();
    merge_sort(&mut arr);
    assert_eq!(r, arr);
}