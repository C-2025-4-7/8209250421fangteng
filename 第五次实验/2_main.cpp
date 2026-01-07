#include <iostream>             
#include "student.h"
int main()
{
	Student stud;
	stud.set_value(123, "Alice", 'f');
	cout << "stud:" << endl;
	stud.display();
	Student stud1(007, "tcg", 'm');
	cout << "stud1:" << endl;
	stud1.display();              
	return 0;
}