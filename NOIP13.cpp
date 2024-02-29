#include<bits/stdc++.h>
using namespace std;
double h, r, x;
int main() {
	cin >> h >> r;
	x = 20 / (h * r * r * 3.14 / 1000);
	cout << ceil(x);
	return 0;
}
