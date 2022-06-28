#pragma once
#include <iostream>

using namespace std;

template <typename T>
class TemplateSet {
protected:
	int max;
	int num;
	T* set;
public:
	TemplateSet<T>(int capacity) {
		num = 0;
		max = capacity;
		set = new T[capacity];
	}
	
	~TemplateSet<T>() {
		delete[] set;
	}

	int capacity(void) {
		return max;
	}

	int size(void) {
		return num;
	}

	int indexOf(T n) {
		for (int i = 0; i < num; ++i)
			if (set[i] == n)
				return i;

		return -1;
	}

	bool contains(T n) {
		return ((indexOf(n) != -1) ? true : false);
	}

	bool add(T n) {
		if (num >= max || contains(n) == true)
			return false;
		else {
			set[num++] = n;
			return true;
		}
	}

	bool remove(T n) {
		int idx;

		if (num < 0 || (idx = indexOf(n)) == -1)
			return false;
		else {
			set[idx] = set[--num];
			return true;
		}
	}

	void copyTo(TemplateSet<T>& s) {
		int n = (s.max < num) ? s.max : num;

		for (int i = 0; i < n; ++i)
			s.set[i] = set[i];

		s.num = n;
	}

	void copyFrom(TemplateSet<T>& s) {
		int n = (max < s.num) ? max : s.num;

		for (int i = 0; i < n; ++i)
			set[i] = s.set[i];

		num = n;
	}

	bool equalTo(TemplateSet<T>& s) {
		if (num != s.num)
			return false;

		for (int i = 0; i < num; ++i) {
			int j = 0;
			for (; j < s.num; ++j)
				if (set[i] == s.set[j])
					break;

			if (j == s.num)
				return false;
		}

		return true;
	}


	void unionOf(TemplateSet<T>& s1, TemplateSet<T>& s2) {
		copyFrom(s1);
		for (int i = 0; i < s2.num; ++i)
			add(s2.set[i]);
	}

	friend std::ostream& operator <<(std::ostream& outputStream, const TemplateSet<T>& A) {
		cout << A.num << "\n";
		cout << "{ ";
		for (int i = 0; i < A.num; ++i)
			cout << A.set[i] << " ";
		cout << "}";

		return outputStream;
	}
};