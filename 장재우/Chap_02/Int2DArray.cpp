#include <iostream>

using namespace std;

int int2DArray(void) {
	int x[2][4] = { 0 };

	x[0][1] = 37;
	x[0][3] = 54;
	x[1][2] = 65;

	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 4; ++j)
			cout << "x[" << i << "][" << j << "] = " << x[i][j] << "\n";

	return 0;
}