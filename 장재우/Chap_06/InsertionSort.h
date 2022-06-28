#pragma once
#include <iostream>
#include "Sort.h"

using namespace std;

class InsertionSort : public Sort {
public :
	static void insertionSort(int* arr, int n) {
		for (int i = 1; i < n; ++i) {
			int j;
			int tmp = arr[i];

			for (j = i; j > 0; --j) {
				if (arr[j - 1] > tmp)
					break;

				arr[j] = arr[j - 1];
			}

			arr[j] = tmp;
		}
	}

	static void insertionSortSentinel(int* arr, int n) {
		for (int i = 1; i < n; ++i) {
			int j;
			int tmp = arr[0] = arr[i];

			for (j = i; arr[j - 1] > tmp; --j)
				arr[j] = arr[j - 1];
	
			arr[j] = tmp;
		}
		
	}

	static void binaryInsertionSort(int* arr, int n) {
		for (int i = 1; i < n; ++i) {
			int tmp = arr[i];

			int left = 0;
			int right = i;
			int mid = i * 0.5f;

			while (left <  right) {
				mid = (left + right) * 0.5f;
				if (tmp < arr[mid])
					right = mid - 1;
				else if (tmp > arr[mid])
					left = mid + 1;
				else
					break;
			}
			mid = (left + right) * 0.5f;

			for (int j = i; j > mid; --j)
				arr[j] = arr[j - 1];

			arr[mid] = tmp;
		}
	}
};