#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int arr[1000];
	int len = 0;
	for (int i = 0; hexString[i] != '\0'; ++i) {
		char c = hexString[i];
		if(!((c>='0' && c<='9') || (c>='a' && c<='f') || (c>='A' && c<='F'))) {
			return -1;
		}
		if (c >= '0' && c <= '9') {
			arr[i] = c - '0';
		} else if(c>='a' && c<='f') {
			arr[i] = c - 'a' + 10;
		} else if(c>='A' && c<='F') {
			arr[i] = c - 'A' + 10;
		}
		len = i+1;
	}
	int n = 0;
	for (int i = 0; i<len; ++i) {
		n = n * 16 + arr[i];
	}
	return n;
}
int main() {
	char s[1000];
	cin.getline(s, 1000);
	cout << parseHex(s) << endl;
	return 0;
}