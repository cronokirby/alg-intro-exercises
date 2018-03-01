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

void selectionSort(int arr[], size_t size) {
	for (auto i = 0; i < size; i++) {
		int min = arr[0];
		for (auto j = 1; j < size; j++) {
			if (arr[j] < min) {
				min = arr[j];
			}
		}
		arr[i] = min;
	}
}

// merge sort
void merge(int arr[], int p, int q, int r) {
	auto n1 = q - p + 1;
	auto n2 = r - q;
	auto arrL = new int[n1];
	auto arrR = new int[n2];
	for (auto i = 0; i < n1; i++) {
		arrL[i] = arr[p + i - 1];
	}
	for (auto i = 0; i < n2; i++) {
		arrR[i] = arr[p + i - 1];
	}
	auto i = 0;
	auto j = 0;
	for (auto k = p; k < r; k++) {
		if (i < n1 && arrL[i] <= arrR[j]) {
			arr[k] = arrL[i];
			i++;
		}
		else if (j < n2) {
			arr[k] = arrR[j];
			j++;
		}
	}
	delete arrL;
	delete arrR;
}

static void do_merge_sort(int arr[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		do_merge_sort(arr, p, q);
		do_merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

void merge_sort(int arr[], size_t size) {
	do_merge_sort(arr, 0, size - 1);
}