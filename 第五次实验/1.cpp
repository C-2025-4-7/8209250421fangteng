#include<iostream>
using namespace std;
class Time             
{
private:             
	int h;
	int m;
	int s;

public:
	void SetTime(int H = 0, int M = 0, int S = 0) {
		h = H, m = M, s = S;
	}
	void ShowTime() {
		cout << h << ":" << m << ":" << s << endl;
	}

};
int main()
{
	Time t1;
	int a, b, c;
	cin >> a >> b >> c;
	t1.SetTime(a,b,c);
	t1.ShowTime();
	return 0;
}