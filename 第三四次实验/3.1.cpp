#include<iostream>
using namespace std;
int gys(int a, int b) {
	while (b != 0) {
		int i = b;
		b = a % b;
		a = i;
		}
	return a;
}
int main() {
	int m, n;
	cin >> m >> n;
	if (m != 0 && n != 0)
		cout << gys(m, n) << endl;
	else 
		cout << "Error" << endl;
	return 0;
}