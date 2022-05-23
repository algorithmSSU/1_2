#include <iostream>

using namespace std;

void triangleLU(int n);
void triangleRB(int n);
void triangleRU(int n);
void triangleLB(int n);

int Q15(void) {
	int n;
	cin >> n;
	triangleLB(n);
	cout << "\n";
	triangleLU(n);
	cout << "\n";
	triangleRB(n);
	cout << "\n";
	triangleRU(n);

	return 0;
}

void triangleLB(int n) {
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << "\n";
	}
}

void triangleLU(int n) {
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n - i + 1; ++j)
			cout << "*";
		cout << "\n";
	}
}

void triangleRU(int n) {
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j < i; ++j)
			cout << " ";
		for (int j = 1; j <= n - i + 1; ++j)
			cout << "*";
		cout << "\n";
	}
}

void triangleRB(int n) {
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j < n - i + 1; ++j)
			cout << " ";
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << "\n";
	}
}