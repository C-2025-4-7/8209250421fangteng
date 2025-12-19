#include<iostream>
using namespace std;
int a, b, c;
int main()
{
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || b == c || a == c)
			cout << "等腰三角形 " << endl;
		cout << "周长是：" << a + b + c;
	}
	else
		cout << "不是三角形" << endl;
	return 0;
}