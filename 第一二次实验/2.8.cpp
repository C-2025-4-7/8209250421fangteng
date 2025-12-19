#include<iostream>
using namespace std;
double a,b,c;
int main()
{
	cin>>a;
	b = a;
	while (1)
	{
		c = a;
		a = 0.5 * (a + (b / a));
		cout << a<<endl;
		if (a - c < 1e-5 && a - c > -1e-5)
		{
			cout << a << endl;
			break;
		}
	}
	return 0;
}