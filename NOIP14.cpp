#include<bits/stdc++.h>
using namespace std;
int x;
int main() {
	cin >> x;
	if ((x / 10 == 6 || x / 10 == 8) && (x % 10 == 6 || x % 10 == 8)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
