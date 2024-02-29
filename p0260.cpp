#include<bits/stdc++.h>
using namespace std;
double max(int a, int b, int c){
	int maxx;
	if(a > b){
		maxx = a;
	}else{
		maxx = b;
	}
	if(c > maxx){
		maxx = c;
	}
	return maxx;
}
int main(){
	int a, b, c;
	double x;
	cin >> a >> b >> c;
	x = max(a, b, c) / (max(a + b, b , c) * max(a, b, b + c));
	printf("%.3lf", x);
	return 0;
}
