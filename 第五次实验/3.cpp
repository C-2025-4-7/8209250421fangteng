#include<iostream>
using namespace std;

class V {
private:
	int l;
	int w;
	int h;

public:
	V(int length, int width, int height) : l(length), w(width), h(height) {}
	V() :l(0), w(0), h(0) {};
	void caculateVolume() {
		int volume = l * w * h;
		cout << "Volume: " << volume << endl;
	}
};

int main() {
	int a, b, c, a1, b1, c1, a2, b2, c2;
	cin >> a >> b >> c >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	V v1(a, b, c);
	V v2(a1, b1, c1);
	V v3(a2, b2, c2);
	v1.caculateVolume();
	v2.caculateVolume();
	v3.caculateVolume();
	return 0;
}