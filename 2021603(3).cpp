#include<iostream>


using namespace std;

class strs {
private:
	string s1;
	string s2;
public:
	strs() {
		s1 = "2";
		s2 = "1";
	}
	~strs() {
		cout << "Deconstructor called" << endl;
	}
	void setvals(string ss, string sss) {
		s1 = ss;
		s2 = sss;
	
		
	}
	void print() {
		cout << s1 << endl;
		cout << s2 << endl;
	}
	int maxlength(string ss, string sss) {
		int i=0,p=0;
		while (ss[i] != '\0') {
			i++;
		} while (sss[p] != '\0') {
			p++;
	 }
		if (i > p) {
			return i;
		}
		else {
			return p;
		}
		}
	
	int compare(string ss,string sss) {
		int i = 0, p = 0;
		while (ss[i] != '\0') {
			i++;
		} while (sss[p] != '\0') {
			p++;
		}if (i > p) {
			cout << "not same" << endl;
		}
		else if(i<p){
			cout << "not same" << endl;
		}
		else if (i = p) {
			bool flag = true;
			for (int i = 0; i < p; i++) {
				if (ss[i] != sss[i]) {
					flag = false;
					return 0;
				}
				else {
					cout << "same" << endl;
					return 1;
				}
			}

			 }
		
	}
	void copy(string ss, string sss) {
		sss = ss;
		cout << sss;
	}
	void concatenate(string ss, string sss) {
		string s7;
		s7 = ss + sss;
			cout << s7;
	}
	int searchword(string s9) {

	}
	int searchchar(char t) {

	}
};

int main() {
	string s3, s4;
	int x;
	cout << "Enter 2 strings" << endl;
	cin >> s3 >> s4;
	do {
		cin >> x;
		cout << "1,Set values" << endl;
		cout << "2,Print" << endl;
		cout << "3,Max length" << endl;
		cout << "4, Compare" << endl;
		cout << "5,Copy" << endl;
		cout << "6,Concatenate" << endl;
		cout << 7"7,Search word" << endl;
	}
}