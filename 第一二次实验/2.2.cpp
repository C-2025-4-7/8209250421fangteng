#include<iostream>
#include<iomanip>
using namespace std;
double x;
int main()
{
	cin >> x;
	if (x > 0 && x < 1)
		cout << (x * -2 + 3);
	else if (x >= 1&&x<5)
		cout <<fixed<<setprecision(4)<< (1/(2*x)+1);
	else
		cout << (x*x);
	return 0;
}