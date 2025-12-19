#include<iostream>
using namespace std;

bool is_prime(int num) {
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
			break;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	if (n <= 1) {
		cout << "error";
		return 0;
	}
	if (is_prime(n)) {
		cout << "yes";
	} else {
		cout << "no";
	}
	return 0;
}