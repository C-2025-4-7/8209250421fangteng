#include<iostream>
using namespace std;
const double PI = 3.141592653589793;
int main()
{
	int r, h;
	cout << "输入半径 r 和高 h: ";
	cin >> r >> h;
	double v = PI * r * r * h / 3;
	cout << "体积 = " << v << endl;

	return 0;
}