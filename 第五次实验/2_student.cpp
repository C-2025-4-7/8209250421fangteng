#include <iostream>
#include "student.h"    
void Student::display()         
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
Student::Student(int n, string na, char s)
{
	num = n;
	name = na;
	sex = s;
}
void Student::set_value(int N, string Na, char S)
{
	num = N, name = Na, sex = S;
}
Student::Student():num(0), name(""), sex(' ') {};
