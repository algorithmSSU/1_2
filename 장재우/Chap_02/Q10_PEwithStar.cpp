#include <iostream>

using namespace std;

#define VMAX 21

extern class PhyscData {
public:
	string name;
	int hight;
	double vision;

	PhyscData(string name, int height, double vision) {
		this->name = name;
		this->hight = height;
		this->vision = vision;
	}
};

extern void distVision(PhyscData* dat, int datLen, int* dist);
extern double aveHight(PhyscData* dat, int len);

int Q10(void) {
	int num;
	int vdist[VMAX] = { 0 };
	PhyscData x[] = {
		PhyscData("박현규", 162, 0.3),
		PhyscData("함진아", 173, 0.7),
		PhyscData("최윤미", 175, 2.0),
		PhyscData("홍연의", 171, 1.5),
		PhyscData("이수진", 168, 0.4),
		PhyscData("김영준", 174, 1.2),
		PhyscData("박용규", 169, 0.8)
	};

	num = sizeof(x) / sizeof(PhyscData);

	cout << "■ 신체검사 리스트 ■\n";
	cout << "이름    키   시력\n";
	cout << "---------------------\n";

	for (int i = 0; i < num; ++i) {
		cout << x[i].name << "  ";
		printf("%3d%5.1f\n",
			x[i].hight, x[i].vision);
	}

	printf("\n평균 키 : %5.1fcm\n", aveHight(x, num));

	distVision(x, num, vdist);

	cout << "\n시력분포\n";

	for (int i = 0; i < VMAX; ++i) {
		printf("%3.1f~ :", i * 0.1);
		for (int j = 0; j < vdist[i]; ++i)
			cout << "*";
		cout << "\n";
	}

	return 0;
}

