#include<bits/stdc++.h>
using namespace std;
const int maxn = 101;
int a[maxn][maxn];
int main() {
	int n;
	cin >> n;
	memset(a, 0, sizeof(a));
	a[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
