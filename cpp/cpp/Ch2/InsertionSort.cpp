#include "stdafx.h"
#include <iostream>


void incInsertionSort(int arr[], size_t size) {
	for (auto j = 1; j < size; j++) {
		const auto key = arr[j];
		auto i = j - 1;
		while (i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
}

void decInsertionSort(int arr[], size_t size) {
	for (auto j = 1; j < size; j++) {
		const auto key = arr[j];
		auto i = j - 1;
		while (i >= 0 && arr[i] < key) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
}

int linearSearch(int v, int arr[], size_t size) {
	for (auto i = 0; i < size; i++) {
		if (arr[i] == v) {
			return i;
		}
	}
	return -1;
}