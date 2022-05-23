#include <iostream>

using namespace std;

extern int mdays[2][12];
extern int getDayOfYearFor(int y, int m, int d);
extern int isLeap(int year);

class YMD {
public:
	int y;
	int m;
	int d;

	YMD(int y, int m, int d) {
		this->y = y;
		this->m = m;
		this->d = d;
	}

	YMD* after(int n) {
		YMD* out = new YMD(y, m, d);

		while (n > 0) {
			if (n + out->d > mdays[isLeap(out->y)][out->m - 1]) {
				n -= mdays[isLeap(out->y)][out->m - 1];

				if (out->m == 12) {
					// case : 년도가 바뀌는 경우
					++(out->y);
					out->m = 1;
				}
				else
					++(out->m);
			}
			else {
				out->d += n;
				n = 0;
				break;
			}
		}

		return out;
	}

	YMD* before(int n) {
		YMD* out = new YMD(y, m, d);

		while (n > 0) {
			if (n >= out->d) {
				n -= out->d;

				if (out->m == 1) {
					--(out->y);
					out->m = 12;
				}
				else
					--(out->m);

				out->d = mdays[isLeap(out->y)][out->m - 1];
			}
			else {
				out->d -= n;
				n = 0;
				break;
			}
		}

		return out;
	}
	
	void print(void) {
		cout << y << " " << m << " " << d << "\n";
	}
};

int Q11(void) {
	int y, m, d, input;
	cin >> y >> m >> d;
	cin >> input;

	YMD a(y, m, d);
	YMD* B = a.after(input);
	B->print();
	delete B;
	B = a.before(input);
	B->print();
	delete B;

	return 0;
}