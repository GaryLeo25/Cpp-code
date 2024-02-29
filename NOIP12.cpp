#include<bits/stdc++.h>
using namespace std;
double x, y, z;
int main() {
	cin >> x;
	if (x <= 20.00) {
		y = x * 4.00;
		printf("%.2lf", y);
	} else {
		z = (x - 20) * 11 + 20 * 4;
		printf("%.2lf", z);
	}
	return 0;
}
