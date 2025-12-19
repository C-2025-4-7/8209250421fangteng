#include<iostream>
using namespace std;
int a, b, i;
int main()
{
	cin >> a >> b;
	int x = a * b;
	while (b != 0)
	{
		i=b;
		b=a%b;
		a=i;
	}
	cout << "最大公约数为:" << a << endl<<"最小公倍数为:"<<x/a;
	return 0;
}