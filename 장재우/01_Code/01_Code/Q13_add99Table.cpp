#include <iostream>

using namespace std;

int Q13(void) {
	// print HeadLine;
	cout << "   |";
	for (int i = 1; i < 10; ++i)
		printf("%3d", i);
	cout << "\n";


	cout << "---+";
	for (int i = 1; i < 10; ++i)
		cout << "---";
	cout << "\n";

	// print Body
	for (int i = 1; i < 10; ++i) {
		printf("%2d |", i);
		for (int j = 1; j <= 9; ++j)
			printf("%3d", i + j);
		cout << "\n";
	}


	return 0;
}