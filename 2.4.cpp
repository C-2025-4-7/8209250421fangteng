#include<iostream>
using namespace std;
double a, b;
char opt;
int main()
{
	cin >> a >> opt >> b;
	switch (opt)
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
	{
		if (b != 0)
			cout << a / b << endl;
		else
			cout << "除数不能为0" << endl;
	}
	
		break;
	}
	return 0;
}