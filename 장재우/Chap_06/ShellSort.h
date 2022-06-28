#pragma once
#include <iostream>
#include "Sort.h"

class ShellSort : public Sort {
public :
	static int shellSortVer1(int* arr, int n) {
		int moveCnt = 0;
		for (int h = n * 0.5f; h > 0; h *= 0.5f) {
			for (int i = h; i < n; ++i) {
				// kind of insertion sort
				int j;
				int tmp = arr[i];
				for (j = i - h; j >= 0 && arr[j] > tmp; j -= h) {
					arr[j + h] = arr[j];
					++moveCnt;
				}
				arr[j + h] = tmp;
			}
		}

		return moveCnt;  
	};

	static int shellSortVer2(int* arr, int n) {
		int h;
		int moveCnt = 0;
		for (h = 1; h < n / 9; h = h * 3 + 1);

		for (; h > 0; h /= 3) {
			for (int i = h; i < n; ++i) {
				// kind of insertion Sort;
				int j;
				int tmp = arr[i];
				for (j = i - h; j >= 0 && arr[j] > tmp; j -= h) {
					arr[j + h] = arr[j];
					++moveCnt;
				}
				arr[j + h] = tmp;
			}
		}

		return moveCnt;
	}
};