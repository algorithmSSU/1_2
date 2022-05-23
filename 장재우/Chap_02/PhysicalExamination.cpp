#include <iostream>

using namespace std;

#define VMAX 21

class PhyscData {
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

void distVision(PhyscData* dat, int datLen, int* dist);
double aveHight(PhyscData * dat, int len);

int physicalExamination(void) {
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

	for (int i = 0; i < VMAX; ++i)
		printf("%3.1f~ :%2d명\n", i * 0.1, vdist[i]);

	return 0;
}

double aveHight(PhyscData* dat, int len) {
	double sum = 0;

	for (int i = 0; i < len; ++i)
		sum += dat[i].hight;

	return sum / len;
}

void distVision(PhyscData* dat, int datLen, int* dist) {
	int i = 0;
	dist[i] = 0;

	for (int i = 0; i < datLen; ++i)
		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX * 0.1)
			dist[(int)(dat[i].vision * 10)]++;


}

