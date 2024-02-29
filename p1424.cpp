#include<bits/stdc++.h>
using namespace std;
int a,b,x,y,z;
int main(){
	cin >> a;
	x = a%1000;
	y = x%100;
	b = x-y;
	z = b/100;
	cout << z;
	return 0;
}
