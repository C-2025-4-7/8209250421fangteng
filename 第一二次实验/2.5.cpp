#include<iostream>
#include<string>
using namespace std;
string line;
int letters = 0, spaces = 0, digits = 0, others = 0;
char c;
int main()
{
	getline(cin, line);
	for (int i = 0; i < line.length(); i++)
	{
		c = line[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;
		else if (c == ' ')
			spaces++;
		else if (c >= '0' && c <= '9')
			digits++;
		else
			others++;
	}
	cout << "字母" << letters <<" 空格" << spaces <<  " 数字" << digits <<" 其他" << others << endl;
	return 0;
}