#include<iostream>
using namespace std;
int a[20] = { 0 };
int n=0,j=1;
bool b = 0;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cin>>n;
		if (j != 1)
			for (int ii = 1; ii < j; ii++)
				if (a[ii] == n)
					b = 1;
		if(b==0)
			a[j] = n,j++;
		b = 0;
	}
	for (int i = 1; i < j; i++)
		cout<<a[i]<<" ";
	return 0;
}