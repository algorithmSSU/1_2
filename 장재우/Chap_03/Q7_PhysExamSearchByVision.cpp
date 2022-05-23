#include <iostream>
#include <algorithm>

#define VMAX 21
using namespace std;

extern class PhyscData {
private:
	string name;
	int height;
	double vision;

	static class HighOrderCompare {
	public:
		bool operator() (const PhyscData& d1, const PhyscData& d2) {
			return (d1.height < d2.height);
		}
		bool operator() (const PhyscData& d1, const int right) {
			return (d1.height < right);
		}
		bool operator() (const int left, const PhyscData& d2) {
			return (left < d2.height);
		}
	};

	static class VisionOrderCompare {
	public:
		bool operator() (const PhyscData& d1, const PhyscData& d2) {
			return (d1.vision < d2.vision);
		}
		bool operator() (const PhyscData& d1, const double right) {
			return (d1.vision < right);
		}
		bool operator() (const double left, const PhyscData& d2) {
			return (left < d2.vision);
		}
	};

public:
	PhyscData(string name, int height, double vision) {
		this->name = name;
		this->height = height;
		this->vision = vision;
	}

	int getHight() {
		return height;
	}
	
	double getVision() {
		return vision;
	}

	void print(void) {
		cout << name << " " << height << " " << vision;
	}

	static HighOrderCompare HEIGHT_ORDER;
	static VisionOrderCompare VISION_ORDER;
};

PhyscData::VisionOrderCompare PhyscData::VISION_ORDER;

int Q7(void) {
	int num;
	int vdist[VMAX] = { 0 };
	double vision;

	PhyscData x[] = {
		PhyscData("�̳���", 162, 0.3),
		PhyscData("������", 168, 0.4),
		PhyscData("���Ѱ�", 169, 0.8),
		PhyscData("ȥ�ر�", 171, 1.5),
		PhyscData("������", 173, 0.7),
		PhyscData("��ȣ��", 174, 1.2),
		PhyscData("�̼���", 175, 2.0)
	};

	num = sizeof(x) / sizeof(PhyscData);

	cout << "�÷��� ���� ����� ã�� �ֳ��� ? : ";
	cin >> vision;

	PhyscData* idx = lower_bound(x, x + num, vision, PhyscData::VISION_ORDER);

	if (idx->getVision() != vision)
		cout << "��Ұ� �����ϴ�.\n";
	else {
		cout << "x[" << idx - x << "]�� �ֽ��ϴ�.\n";
		cout << "ã�� ������ : "; idx->print();
		cout << "\n";
	}

	return 0;

}
