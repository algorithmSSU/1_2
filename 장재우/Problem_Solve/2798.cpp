#include <iostream>

using namespace std;

int pronblem2798() {
	int inputNum, upperBound;
	cin >> inputNum >> upperBound;

	int* inputValue = new int[inputNum];
	for (int i = 0; i < inputNum; ++i)
		cin >> inputValue[i];

	int largest = 0;
	int temp = 0;
	int currentValue = 0;

	for (int i = 0; i < inputNum - 2; ++i) {
		for (int j = i + 1; j < inputNum - 1; ++j) {
			temp = inputValue[i] + inputValue[j];
			if (temp > upperBound)
				continue;
			for (int k = j + 1; k < inputNum; ++k) {
				currentValue = temp + inputValue[k];
				if (currentValue > largest && currentValue <= upperBound)
					largest = temp + inputValue[k];
			}
		}
	}

	cout << largest;

	delete[] inputValue;

	return 0;
}


/*
BAEKJOON
Nuber : 2798
name : ºí·¢Àè
date : '21. 12. 23.
Made by Arkady
*

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class Node {
public:
	int weight;
	int level;

	Node() {
		weight = 0;
		level = 0;
	}
};

int bound(Node node, int* arr, int n);

int main(void) {
	int n, max;
	int most = 0;
	cin >> n >> max;

	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	sort(arr, arr + n);
	queue<Node> que;
	Node node;
	que.push(node);

	while (!que.empty()) {
		Node temp = que.front();
		que.pop();

		int tempInt = temp.weight + arr[temp.level];

		if (tempInt <= max) {
			most = (tempInt > most) ? tempInt : most;

			++(temp.level);
			if (bound(node, arr, n) > most) que.push(temp);
			temp.weight = tempInt;
			if (bound(node, arr, n) > most) que.push(temp);
		}
	}

	cout << most;

	delete[] arr;

	return 0;
}

int bound(Node node, int* arr, int n) {
	int toWeight = node.weight;

	for (int i = node.level + 1; i < n; ++i)
		toWeight += arr[i];

	return toWeight;
}
*/