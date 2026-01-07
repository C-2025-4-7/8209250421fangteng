#include<iostream>
using namespace std;

class point {
private:
	int x, y;

public:
	point() { x = 60; y = 80; }
	point(int a, int b) { x = a; y = b; }
	void setpoint(int a, int b) { x = a+60; y = b+80; }
	void display() { cout << "x=" << x << ",y=" << y << endl; }
};
int main(){
	point p1;
	p1.display();
	point p2;
	p2.setpoint(5, 5);
	p2.display();
	return 0;
}