#include<iostream>
using namespace std;

char x;
int main() 
{
	cin >> x;
	if (x >= 'a' && x <= 'z')
		cout<<char(x-'a'+'A')<<endl;
	else
		cout<<int(x+1)<<endl;
	return 0;
}