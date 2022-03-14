#include<iostream>


using namespace std;

class heater {
private:
	int temp;
public:
	heater() {
		temp = 15;
	}
	void print() {
		cout << "temperature = " << temp << endl;
	}
	void cold() {
		temp = temp + 5;
	}
	void hot() {
		temp = temp - 5;
	}
	~heater() {
		cout << "destructor called" << endl;
	}

};

int main() {
	heater h1;
	int x;
	cout << "1,To check temp" << endl;
	cout << "2,Cooler" << endl;
	cout << "3,Warmer" << endl;
	cout << "4,End" << endl;
	cin >> x;
	do {
		switch (x) {
		case 1:
		{
			h1.print();
			break;
		}
		case 2:
		{
			h1.cold();
			break; }
		case 3:
		{
			h1.hot();
			break;
		}
		case 4:
		{break; }
		}
		cin >> x;
	} while (x != 4);
	return 0;
};











