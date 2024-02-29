#include<bits/stdc++.h>
using namespace std;
int x, y, x2, y2, n, m, t;
int main(){
	cin >> x >> y >> x2 >> y2;
	n = x2 * 60 + y2 + 24 * 60;
	m = x * 60 + y;
	t = (n - m) % (24 * 60);
	cout << t;
	return 0;
} 
