#pragma once
#include "Sort.h"

using namespace std;

class Heap {
public :
	int* arr;
	int size;
	int capacity;

	Heap(int n) {
		arr = new int[n + 1];
		size = 0;
		capacity = n;
	}

	~Heap() {
		delete[] arr;
	}

	void push(int n) {
		if (size == capacity)
			return;

		int idx = ++size;

		while (idx > 1) {
			if (n < arr[idx / 2]) {
				arr[idx] = arr[idx / 2];
				idx = idx / 2;
			}
			else
				break;
		}

		arr[idx] = n;
	}

	int pop() {
		if (size <= 0)
			return -1;

		int retVal = arr[1];
		int tmp = arr[size--];
		int idx = 1;

		while (idx * 2 <= size) {
			int leftChild = idx * 2;
			int rightChild = idx * 2 + 1;

			int minIdx;
			if (rightChild <= size)
				minIdx = (arr[leftChild] < arr[rightChild]) ? leftChild : rightChild;
			else
				minIdx = leftChild;

			if (arr[minIdx] < tmp) {
				arr[idx] = arr[minIdx];
				idx = minIdx;
			}
			else
				break;
		}

		arr[idx] = tmp;
		
		return retVal;
	}
};

class HeapSort : public Sort {
public :
	static void heapSort(int* arr, int n) {
		Heap* heap = new Heap(n);
		for (int i = 0; i < n; ++i)
			heap->push(arr[i]);

		for (int i = 0; i < n; ++i)
			arr[i] = heap->pop();
	}
};