#include "stdafx.h"
#include <iostream>

#include "Ch2\InsertionSort.h"


int main() {
	int arr[10] = { 34, 3, 2, 56, 2, 6, 7, 34, 1, 6 };
	incInsertionSort(arr, 10);
	for (auto i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	decInsertionSort(arr, 10);
	for (auto i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << linearSearch(100, arr, 10);
    return 0;
}

