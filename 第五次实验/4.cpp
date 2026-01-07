#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	int n;
	int g;
public:
	Student() {n = 0;g = 0;}
	Student(int number, int grade) {n = number;g = grade;}
	void Set(int number, int grade) {
		n = number;
		g = grade;
	}
	int getN() {return n;}
	int getG() {return g;}
};
void max(Student* s) {
	int maxn = 0;
	int maxg = 0;
	for (int i = 0; i < 5; i++) {
		if (maxg < s[i].getG()) {
			maxn = s[i].getN();
			maxg = s[i].getG();
		}
	}
	cout << "Number: " << maxn << ", Grade: " << maxg << endl;
}

int main() {
	int n, g;
	Student s[5];
	for (int i = 0; i < 5; i++) {
		cin >> n >> g;
		s[i].Set(n, g);
	}
	max(s);
	return 0;
}