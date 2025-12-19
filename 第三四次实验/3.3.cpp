#include<iostream>
#include"mytrangle.h"
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if(is_valid(a, b, c)) {
		cout << "Area: " << area(a, b, c) << endl;
	} else {
		cout << "Invalid triangle sides." << endl;
	}
	return 0;
}