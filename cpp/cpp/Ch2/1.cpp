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

bool* addBin(bool a[], bool b[], size_t n) {
	auto c = new bool[n + 1] { 0 };
	bool carry = false;
	for (auto i = n; i > 0; i--) {
		auto j = i - 1;
		c[i] = (a[j] != b[j]) != carry;
		carry = a[j] && b[j];
	}
	c[0] = carry;
	return c;
}