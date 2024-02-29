#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g;
int main(){
	cin >> a;
	b = a%60;
	c = a - b;
	d = c/60;
	e = d%60;
	f = d-e;
	g = f /60;
	cout <<g<<":"<<e<<":"<<b;
	return 0;
}
