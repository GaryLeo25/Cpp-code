#include<bits/stdc++.h>
using namespace std;
int main() {
	char ch;
	cin >> ch;
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		cout << "letter";
	} else if (ch >= '0' && ch <= '9') {
		cout << "digit";
	} else {
		cout << "other";
	}
	return 0;
}
