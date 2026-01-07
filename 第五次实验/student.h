#include<string>
using namespace std;

class Student                   
{
private:                        
	int num;                    
	string name;
	char sex;

public:
	Student();
	Student(int n, string na, char s);
	void set_value(int N = 0, string Na = "", char S = ' ');
	void display();
};
