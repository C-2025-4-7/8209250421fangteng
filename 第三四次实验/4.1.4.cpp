#include<iostream>
using namespace std;
int a[100], b[100], c[100];
int n, m;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 1, i1 = 1, i2 = 1; i <= size1 + size2; i++) {
		if (list1[i1] <= list2[i2] && i1 <= size1 || i2 > size2) {
			list3[i] = list1[i1];
			i1++;
		}
		else {
			list3[i] = list2[i2];
			i2++;
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	merge(a, n, b, m, c);
	for (int i = 1; i <= n + m; i++)
		cout << c[i] << " ";
	return 0;
}