#pragma once
#include <iostream>
#include "Sort.h"

using namespace std;

class MergeSort : public Sort{
public :
	static void merge(int* arr, int left, int mid, int end) {
		int* tmp = new int[end - left + 2];

		int pLeft = left;
		int pRight = mid + 1;
		int idx = 0;

		while (pLeft <= mid && pRight <= end)
			tmp[idx++] = (arr[pLeft] < arr[pRight]) ? arr[pLeft++] : arr[pRight++];

		while (pLeft <= mid)
			tmp[idx++] = arr[pLeft++];
			
		while (pRight <= end)
			tmp[idx++] = arr[pRight++];

		for (int i = left; i <= end; ++i)
			arr[i] = tmp[i -  left];

		delete[] tmp;
	}

	static void mergeSortInside(int* a, int left, int right) {
		if (left >= right)
			return;

		int center = (left + right) * 0.5f;

		mergeSortInside(a, left, center);
		mergeSortInside(a, center + 1, right);
		merge(a, left, center, right);
	}

	static void mergeSort(int* a, int n) {
		mergeSortInside(a, 0, n - 1);
	}
};