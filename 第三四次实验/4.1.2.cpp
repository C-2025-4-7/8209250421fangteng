#include<iostream>
using namespace std;

void maopao(double arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int main()
{
	double a[10] = { 0 };
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	maopao(a, 10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	return 0;
}