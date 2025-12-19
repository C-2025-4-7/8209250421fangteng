#include<iostream>
using namespace std;
int ca(int t) {
	if (t == 1)
		return 1;
	else 
		return (ca(t - 1)+1) * 2;
}
int main()
{
	cout << ca(10);
	return 0;
}