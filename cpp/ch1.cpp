#include <assert.h>
#include <iostream>


struct Array {
    int* arr;
    size_t len;

    Array(int* arr, size_t len) : arr(arr), len(len) {}

    // Sorts via insertion sort, in ascending order
    void do_insertion_sort(int start, int stop) {
        for (auto j = start + 1; j < stop; j++) {
            auto key = arr[j];
            int i;
            for (i = j - 1; i >= 0 && arr[i] > key; i--) {
                arr[i + 1] = arr[i];
            }
            arr[i + 1] = key;
        }
    }

    void insertion_sort() {
        return do_insertion_sort(0, len);
    }

    // Sorts via insertion sort, in descending order
    void dec_insertion_sort() {
        for (auto j = 1; j < len; j++) {
            auto key = arr[j];
            int i;
            for (i = j - 1; i >= 0 && arr[i] < key; i--) {
                arr[i + 1] = arr[i];
            }
            arr[i + 1] = key;
        }
    }

    // searches for an element linearly, returning -1 if it can't be found.
    int linear_search(int el) {
        for (auto i = 0; i < len; i++) {
            if (arr[i] == el) {
                return i;
            }
        }
        return -1;
    }

    void merge(int start, int mid, int stop) {
        // copy this section into slice
        auto slice = new int[stop - start];
        for (auto i = start; i < stop; i++) {
            slice[i] = arr[i];
        }
        int l = 0;
        int r = 0;
        for (;;) {
            if (l < mid) {
                if (r < stop && slice[l] > slice[r]) {
                    arr[r] = slice[r];
                    r++;
                } else {
                    arr[l] = slice[l];
                    l++;
                }
            } else if (r < stop) {
                arr[r] = slice[r];
                r++;
            } else break;
        }
        delete[] slice;
    }

    // sorts chunk of size chunk_size via insertion sort,
    // and then merges those chunks
    void do_merge_sort(int chunk_size, int start, int stop) {
        if (0 < stop - start <= chunk_size) {
            do_insertion_sort(start, stop);
        } else {
            int mid = stop / 2;
            do_merge_sort(chunk_size, start, mid);
            do_merge_sort(chunk_size, mid, stop);
            merge(start, stop, mid);
        }
    }

    void merge_sort() {
        do_merge_sort(1, 0, len);
    }

    void mixed_sort(int chunk_size) {
        do_merge_sort(chunk_size, 0, len);
    }

    void bubble_sort() {
        for (auto i = 1; i < len; i++) {
            for (auto j = len - 1; j >= i; j--) {
                if (arr[j] < arr[j - 1]) {
                    auto tmp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = tmp;
                }
            }
        }
    }

    bool is_sorted() {
        int i = 0;
        while (i < len) {
            auto a = arr[i];
            i++;
            if (a > arr[i]) {
                return false;
            }
        }
        return true;
    }
};


int naive_horner(int x, const Array& coefs) {
    int sum = 0;
    for (auto i = 0; i < coefs.len; i++) {
        int xk = 1;
        for (auto j = 0; j < i; j++) {
            xk *= x;
        }
        sum += coefs.arr[i] * xk;
    }
}


int main() {
    int x[6] = {5, 4, 3, 2, 1, 0};
    auto arr = Array(x, 6);
    // insertion sort works
    arr.insertion_sort();
    assert(arr.is_sorted());
    // works in the opposite order
    arr.dec_insertion_sort();
    for (auto i = 0; i < arr.len; i++) {
        assert(arr.arr[i] == 5 - i);
    }
    assert(arr.linear_search(-10) == -1);
    assert(arr.linear_search(5) == 0);

    arr.merge_sort();
    assert(arr.is_sorted());
    // desorting the array, which we already tested works
    arr.dec_insertion_sort();
    arr.mixed_sort(2);
    assert(arr.is_sorted());
    arr.dec_insertion_sort();
    arr.bubble_sort();
    assert(arr.is_sorted());
}