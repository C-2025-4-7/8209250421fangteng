#include<iostream>
using namespace std;
void count(const char s[]) {
	int counts[1000] = { 0 };
	for (int i = 0; s[i] != '\0'; i++) {
		counts[(unsigned char)s[i]]++;
		if (s[i] >= 'A' && s[i] <= 'Z') {
			counts[(unsigned char)(s[i]+32)]++;
		}
	}
	for (int i = 97; i <= 122; i++) {
		if(counts[i]>0){
			cout<<(char)i<<":"<<counts[i]<<endl;
		}
	}
}
int main() {
	char s[1000];
	cin.getline(s, 1000);
	count(s);
	return 0;
}