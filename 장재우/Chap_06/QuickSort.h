#pragma once
#include <iostream>
#include <vector>
#include "Sort.h"
#include "InsertionSort.h"

using namespace std;

class QuickSort : public Sort {
public :
	static int partition(int* arr, int n) {
		int pl = 0;
		int pr = n - 1;
		int x = arr[n / 2];

		do {
			while (arr[pl] < x) ++pl;
			while (arr[pr] > x) --pr;

			if (pl <= pr)
				swap(arr, pl++, pr--);

		} while (pl <= pr);

		cout << "�ǹ��� ���� " << x << "�Դϴ�.\n";
		
		cout << "�ǹ� ������ �׷�\n";
		for (int i = 0; i < pl; ++i)
			cout << arr[i] << " ";
		cout << "\n";


		cout << "�ǹ��� ��ġ�ϴ� �׷�\n";
		for (int i = pr + 1; i < pl; ++i)
			cout << arr[i] << " ";
		cout << "\n";

		cout << "�ǹ� �̻��� �׷�\n";
		for (int i = pr + 1; i < n; ++i)
			cout << arr[i] << " ";
		cout << "\n";

		return x;
	}

	static void quickSort(int* arr, int left, int right) {
		int pl = left;
		int pr = right;
		int x = arr[(pl + pr) / 2];

		do {
			while (arr[pl] < x) ++pl;
			while (arr[pr] > x) --pr;

			if (pl <= pr)
				swap(arr, pl++, pr--);

		} while (pl <= pr);

		if (left < pr) quickSort(arr, left, pr);
		if (pl < right) quickSort(arr, pl, right);
	}

	static void quickSort(int* arr, int n) {
		int pl = 0;
		int pr = n - 1;
		int x = arr[(pl + pr) / 2];

		do {
			while (arr[pl] < x) ++pl;
			while (arr[pr] > x) --pr;

			if (pl <= pr)
				swap(arr, pl++, pr--);

		} while (pl <= pr);

		if (0 < pr) quickSort(arr, pr + 1);
		if (pl < n - 1) quickSort(arr + pl, n - pl);
	}

	static void quickSortWithInsertion(int* arr, int left, int right) {
		if (right - left < 9)
			InsertionSort::insertionSort(arr + left, right - left + 1);

		else {
			int pl = left;
			int pr = right;
			int x = arr[(pl + pr) / 2];

			do {
				while (arr[pl] < x) ++pl;
				while (arr[pr] > x) --pr;

				if (pl <= pr)
					swap(arr, pl++, pr--);

			} while (pl <= pr);

			if (left < pr) quickSort(arr, left, pr);
			if (pl < right) quickSort(arr, pl, right);
		}
	}
};