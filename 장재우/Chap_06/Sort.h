#pragma once
#include <iostream>

using namespace std;

class Sort {
public :
	static void swap(int* arr, int idx1, int idx2) {
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}

	static void printArr(int* arr, int n) {
		for (int i = 0; i < n; ++i)
			cout << "arr[" << i << "] = " << arr[i] << "\n";
	}

	static void printLine(int* arr, int n, int j, char ch) {
		for (int i = 0; i < n; ++i) {
			cout << arr[i];
			if (i == j)
				cout << ch;
			else
				cout << " ";
		}
		cout << "\n";
	}
	
};