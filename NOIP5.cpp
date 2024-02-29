#include<bits/stdc++.h>
using namespace std;
int h, m, s, h1, m1, s1, n;
int main(){
	cin >> h >> m >> s >> h1 >> m1 >> s1;
	n = h * 3600 + m * 60 + s + h1 * 3600 + m1 * 60 + s1;
	cout << n / 3600 << " " << n % 3600 / 60 << " " << n % 60;
	return 0;
}
