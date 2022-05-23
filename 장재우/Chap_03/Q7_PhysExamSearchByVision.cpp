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
		PhyscData("이나영", 162, 0.3),
		PhyscData("유지훈", 168, 0.4),
		PhyscData("김한결", 169, 0.8),
		PhyscData("혼준기", 171, 1.5),
		PhyscData("전서현", 173, 0.7),
		PhyscData("이호연", 174, 1.2),
		PhyscData("이수민", 175, 2.0)
	};

	num = sizeof(x) / sizeof(PhyscData);

	cout << "시력이 몇인 사람을 찾고 있나요 ? : ";
	cin >> vision;

	PhyscData* idx = lower_bound(x, x + num, vision, PhyscData::VISION_ORDER);

	if (idx->getVision() != vision)
		cout << "요소가 없습니다.\n";
	else {
		cout << "x[" << idx - x << "]에 있습니다.\n";
		cout << "찾은 데이터 : "; idx->print();
		cout << "\n";
	}

	return 0;

}
