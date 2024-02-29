#include<bits/stdc++.h>
using namespace std;
long long j = 1, x;
int main() {
	cin >> x;
	for (long long i = 0; i < x; i++) {
		j = j * 2;
	}
	cout << j;
	return 0;
}
