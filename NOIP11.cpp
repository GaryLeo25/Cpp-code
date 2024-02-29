#include<bits/stdc++.h>
using namespace std;
int x, y, z, h, m;
int main(){
	cin >> x;
	h = x / 3600;
	z = x % 3600 / 60;
	cout << h << " " << z << " " << "0";
	return 0;
}
