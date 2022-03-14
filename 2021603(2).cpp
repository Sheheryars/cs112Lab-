#include<iostream>

using namespace std;

class parity {
private:
	int agh;
	int* A;
public:
	parity() {
		agh = 0;
		A = new int[agh];
	}
	

	void putin() {
		int x;
		x = agh + 1;
		agh = agh + 1;
		int* temp = new int[x];
		for (int i = 0; i < x; i++) {
			temp[i] = A[i];
		};
		delete[]A;
		for (int i = x - 1; i < x; i++) {
			cin >> temp[i];
		};
		
		A = temp;


	}
	void print() {
		for (int i = 0; i < agh; i++) {
			cout << A[i] << endl;
		};
	}

	void deletenum() {
		int x;
		x = agh - 1;
		agh = agh - 1;
		int* temp = new int[x];
		A[agh] = 0;
		for (int i = 0; i < x; i++) {
			temp[i] = A[i];
		};
		delete[]A;
		for (int i = 0; i < agh; i++) {
			A = temp;
		};
	}
	void test() {
		int count = agh;
		if (count % 2 == 1) {
			cout << "The number of inputs are odd" << endl;
		}
		else if (count % 2 == 0) {
			cout << "The number of inputs are even" << endl;
		}


	}

};

int main() {
	int x;
	parity p1;

	do {
		cout << "1'Print all numbers" << endl;
		cout << "2,Add another number" << endl;
		cout << "3,Remove last number" << endl;
		cout << "4,Test" << endl;
		cout << "5,End" << endl;
		cin >> x;
		switch (x) {
		case 1:
		{
			p1.print();
			break;

		}
		case 2:
		{
			p1.putin();
			break;
		}
		case 3:
		{
			p1.deletenum();
			break;
		}
		case 4:
		{
			p1.test();
			break;
		}
		case 5:
		{
			break;
		}
		}
	} while (x != 5);

	return 0;
}