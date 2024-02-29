#include<bits/stdc++.h>
using namespace std;
int h, m, h1, m1, n;
int main(){
	cin >> h >> m >> h1 >> m1;
	n = (h1 * 3600 + m1 * 60) - (h * 3600 + m * 60);
	cout << n / 3600 << " " << n % 3600 / 60;
	return 0;
}
