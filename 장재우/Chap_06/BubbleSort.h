#pragma once
#include <iostream>
#include "Sort.h"

using namespace std;

class BubbleSort : public Sort {
public :
	static void bubbleSortVer1(int* arr, int n) {
		for (int i = 0; i < n; ++i) {
			for (int j = n - 1; j > i; --j)
				if (arr[j - 1] > arr[j])
					swap(arr, j - 1, j);
		}
	}

	static void bubbleSortVer2(int* arr, int n) {
		for (int i = 0; i < n - 1; ++i) {
			int exchg = 0;
			for (int j = n - 1; j > i; --j) {
				if (arr[j - 1] > arr[j]) {
					swap(arr, j - 1, j);
					exchg++;
				}
			}
			if (exchg == 0) break;
		}
	}

	static void bubbleSortVer3(int* arr, int n) {
		int k = 0;
		while (k < n - 1) {
			int last = n - 1;
			for (int j = n - 1; j > k; --j) {
				if (arr[j - 1] > arr[j]) {
					swap(arr, j - 1, j);
					last = j;
				}
			}
			k = last;
		}
	}

	static void shakerSort(int* arr, int n) {
		int last = 0;
		int left, right;

		left = 0;
		right = n - 1;
		while (left < right) {
			for (int j = right; j > left; --j) {
				if (arr[j - 1] > arr[j]) {
					swap(arr, j - 1, j);
					last = j;
				}
			}
			left = last;
			for (int j = left; j < right; ++j) {
				if (arr[j] > arr[j + 1]) {
					swap(arr, j, j + 1);
					last = j;
				}
			}
			right = last;
		}
	}

	static void bubbleSortLR(int* arr, int n) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n - i - 1; ++j)
				if (arr[j + 1] < arr[j])
					swap(arr, j + 1, j);
		} 
	}

	static void bubbleSortVer1Detail(int* arr, int n) {
		int compareCnt = 0;
		int swapCnt = 0;
		for (int i = 0; i < n; ++i) {
			cout << "패스" << i + 1 << ":\n";
			for (int j = n - 1; j > i; --j) {
				if (arr[j - 1] > arr[j]) {
					printLine(arr, n, j - 1, '+');
					swap(arr, j - 1, j);
					++swapCnt;
				}
				else
					printLine(arr, n, j - 1, '-');
				++compareCnt;
			}
			printLine(arr, n, 0, ' ');
		}

		cout << "비교를 " << compareCnt << "회 했습니다.\n";
		cout << "교환을 " << swapCnt << "회 했습니다.\n";
	}

	static void bubbleSortVer2Detail(int* arr, int n) {
		int compareCnt = 0;
		int swapCnt = 0;
		for (int i = 0; i < n - 1; ++i) {
			cout << "패스" << i + 1 << ":\n";
			int exchg = 0;
			for (int j = n - 1; j > i; --j) {
				if (arr[j - 1] > arr[j]) {
					printLine(arr, n, j - 1, '+');
					swap(arr, j - 1, j);
					exchg++;
					++swapCnt;
				}
				else
					printLine(arr, n, j - 1, '-');
				++compareCnt;
			}
			printLine(arr, n, 0, ' ');
			if (exchg == 0) break;
		}
		cout << "비교를 " << compareCnt << "회 했습니다.\n";
		cout << "교환을 " << swapCnt << "회 했습니다.\n";
	}	
	
	static void bubbleSortVer3Detail(int* arr, int n) {
		int compareCnt = 0;
		int swapCnt = 0;
		int k = 0;
		int i = 0;
		while (k < n - 1) {
			int last = n - 1;
			cout << "패스" << i + 1 << ":\n";
			for (int j = n - 1; j > k; --j) {
				if (arr[j - 1] > arr[j]) {
					printLine(arr, n, j - 1, '+');
					swap(arr, j - 1, j);
					last = j;
					++swapCnt;
				}
				else
					printLine(arr, n, j - 1, '-');
				++compareCnt;
			}
			k = last;
			++i;
		}
		cout << "비교를 " << compareCnt << "회 했습니다.\n";
		cout << "교환을 " << swapCnt << "회 했습니다.\n";
	}
};