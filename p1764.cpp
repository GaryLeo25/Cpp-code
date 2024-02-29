#include<bits/stdc++.h>
using namespace std;
double MY_max(double a, double b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}
int main(){
	double a, b, x;
	cin >> a >> b;
	x = MY_max(a, b);
	printf("%.2lf", x);
	return 0;
}
