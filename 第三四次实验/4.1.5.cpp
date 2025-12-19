#include<iostream>
using namespace std;
char s1[200],s2[200];
int indexOf(const char s1[], const char s2[])
{	
	int k = -1;
	for (int i = 0; s2[i] != '\0'; i++)
	{	
		if (s1[0] == s2[i])
		{
			k = i;
			for (int j=0,ii=i; s1[j] != '\0'; j++,ii++)
			{	
				if (s1[j] != s2[ii])
				{
					k=-1;
					break;
				}
				if (s1[j + 1] == '\0')
					return k;
			}
		}			
	}
	return k;
}
int main()
{
	cin.getline(s1, 200);
	cin.getline(s2, 200);
	cout << indexOf(s1, s2) << endl;
}