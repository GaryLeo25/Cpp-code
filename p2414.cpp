#include<bits/stdc++.h>
using namespace std;
int eoven(int x) {
	if (abs(x) % 2 == 1) {
		return 1;
	} else {
		return 2;
	}
}
int main() {
	int x;
	cin >> x;
	cout << eoven(x);
	return 0;
}
