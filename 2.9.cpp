#include<iostream>
using namespace std;
int a,sum,i=0;
int main()
{
	a = 2;
	sum = 2;
	i = 1;
	while (sum <= 100)
	{
		i++;
		a = a * 2;
		sum += a;
		//cout << sum << endl;
	}
	cout << sum * 0.8 / i<<endl;
	return 0;
}