#include<bits/stdc++.h>
using namespace std;
int a,x,y,z;
int main(){
	cin >> a;
	x = a/100;
	y = a%100/10;
	z = a%100%10;
	cout <<z<<y<<x;
	return 0;
}
