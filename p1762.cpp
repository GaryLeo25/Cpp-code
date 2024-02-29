#include<bits/stdc++.h>
using namespace std;
double ball(int k, int r){
	if(k == 1){
		return 4.0 / 3 * 3.14 * r * r * r ;
	}else if(k == 2){
		return 4.0 / 3 * 3.1415926 * r * r * r;
	}
}
int k, r;
int main(){
	cin >> k >> r;
	double x = ball(k, r);
	printf("%.2lf", x);
	return 0;
}
