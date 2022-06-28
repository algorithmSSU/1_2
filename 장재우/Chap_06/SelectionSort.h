#pragma once
#include <iostream>
#include "Sort.h"

using namespace std;

class SelctionSort : public Sort {
public :
	static void selectionSort(int* arr, int n) {
		for (int i = 0; i < n; ++i) {
			int min = i;
			for (int j = i; j < n; ++j) {
				if (arr[j] < arr[min])
					min = j;
			}
			swap(arr, min, i);
		}
	}

	static void selectionSortPrint(int* arr, int n) {
		for (int i = 0; i < n; ++i) {
			int min = i;
			for (int j = i; j < n; ++j) {
				if (arr[j] < arr[min])
					min = j;
			}
			printf("%*c\r", min * 2 + 1, '+');
			printf("%*c\n", i * 2 + 1, '*');
			printLine(arr, n, 0, ' ');
			swap(arr, min, i);
		}
	}
};