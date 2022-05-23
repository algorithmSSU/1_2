#include <iostream>

using namespace std;

extern int maxOf(int* in, int len);

int maxOfArrayRand(void) {
	int num;
	srand(time(NULL));

	cout << "키의 최대값을 구합니다.\n";
	cout << "사람 수 : ";
	cin >> num;

	int* hight = (int*)malloc(num * sizeof(int));

	cout << "키 값은 아래와 같습니다.\n";
	for (int i = 0; i < num; ++i) {
		hight[i] = 100 + rand() % 90;
		cout << "hight[" << i << "] : " << hight[i] << "\n";
	}

	cout << "최대값은 " << maxOf(hight, num) << "입니다.\n";

	if (hight != NULL) {
		free(hight);
		hight = NULL;
	}

	return 0;
}