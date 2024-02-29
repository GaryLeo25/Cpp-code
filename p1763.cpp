#include<bits/stdc++.h>
using namespace std;
double MY_min(double a, double b){
	if(a < b){
		return a;
	}else{
		return b;
	}
}
int main(){
	double a, b, x;
	cin >> a >> b;
	x = MY_min(a, b);
	printf("%.2lf", x);
	return 0;
}
