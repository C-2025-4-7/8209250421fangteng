#include<iostream>
using namespace std;
bool a[101] = { 0 };
int n = 0;
int main() {
	for (int i = 1; i < 100; i++) {
		for (int j = i; j < 100; j += i)
			a[j] = !a[j];
	}
	for (int i = 1; i < 100; i++)
		if (a[i]) 
			cout<<i<<" ";

	return 0;
}