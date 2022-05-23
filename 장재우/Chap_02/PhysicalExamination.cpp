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
		PhyscData("������", 162, 0.3),
		PhyscData("������", 173, 0.7),
		PhyscData("������", 175, 2.0),
		PhyscData("ȫ����", 171, 1.5),
		PhyscData("�̼���", 168, 0.4),
		PhyscData("�迵��", 174, 1.2),
		PhyscData("�ڿ��", 169, 0.8)
	};

	num = sizeof(x) / sizeof(PhyscData);

	cout << "�� ��ü�˻� ����Ʈ ��\n";
	cout << "�̸�    Ű   �÷�\n";
	cout << "---------------------\n";

	for (int i = 0; i < num; ++i) {
		cout << x[i].name << "  ";
		printf("%3d%5.1f\n",
			x[i].hight, x[i].vision);
	}

	printf("\n��� Ű : %5.1fcm\n", aveHight(x, num));

	distVision(x, num, vdist);
	
	cout << "\n�÷º���\n";

	for (int i = 0; i < VMAX; ++i)
		printf("%3.1f~ :%2d��\n", i * 0.1, vdist[i]);

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

