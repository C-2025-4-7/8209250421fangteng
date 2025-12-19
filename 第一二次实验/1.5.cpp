#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double f;
    cout << "输入华氏温度: ";
    cin >> f;
    double c = 5.0 / 9 * (f - 32);
    cout << fixed << setprecision(2);
    cout << "摄氏温度 = " << c << endl;
    return 0;
}