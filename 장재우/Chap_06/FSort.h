#pragma once
#include "Sort.h"

using namespace std;

class FSort : public Sort {
public :
	static void fSort(int* arr, int n, int max) {
		int* f = new int[max + 1];
		int* b = new int[n];

		for (int i = 0; i < max + 1; ++i)
			f[i] = 0;

		for (int i = 0; i < n; ++i)
			b[i] = 0;


		for (int i = 0; i < n; ++i) f[arr[i]]++;
		for (int i = 1; i <= max; ++i) f[i] += f[i - 1];
		for (int i = n - 1; i >= 0; --i) b[--f[arr[i]]] = arr[i];
		for (int i = 0; i < n; ++i) arr[i] = b[i];

		delete[] f;
		delete[] b;
	}

	static void fSort(int* arr, int n, int min, int max) {
		int* f = new int[max - min + 2];
		int* b = new int[n];

		for (int i = 0; i < max - min + 2; ++i)
			f[i] = 0;

		for (int i = 0; i < n; ++i)
			b[i] = 0;

		for (int i = 0; i < n; ++i) f[arr[i] - min]++;
		for (int i = 1; i <= max - min + 1; ++i) f[i] += f[i - 1];
		for (int i = n - 1; i >= 0; --i) b[--f[arr[i] - min]] = arr[i];
		for (int i = 0; i < n; ++i) arr[i] = b[i];

		delete[] f;
		delete[] b;

	}
};