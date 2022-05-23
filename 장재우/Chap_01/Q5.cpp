#include <iostream>

using namespace std;

int med3_Q5(int a, int b, int c);
int Q5(void);

int Q5(void) {
	int a, b, c;
	cout << "세 정수의 중앙값을 구합니다.\n";

	cout << "a의 값 : ";
	cin >> a;
	cout << "b의 값 : ";
	cin >> b;
	cout << "c의 값 : ";
	cin >> c;

	cout << "중앙값은 " << med3_Q5(a, b, c) << "입니다.\n";

	return 0;

	return 0;
}

int med3_Q5(int a, int b, int c) {
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a < b && c > b))
		return b;
	return c;
}

/*
 * med3_Q5는 med3에 비해 퍙균적으로 더 많은 대소비교를 요구한다.
 * 구체적으로 b >= a 비교를 통해 a < b인지 아닌지도 알 수 있지만,
 * else if문에서 a < b여부를 다시 한번 확인하고 있다.
 * 즉 동일한 정보에 대해 중복적으로 확인하여 비효율적이다.
 */