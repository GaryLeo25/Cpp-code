#include<bits/stdc++.h>
using namespace std;
int a, b;
double c, d;
int main(){
	cin >> a;
	for(int i = 1; i <= a; i++){
		cin >> b;
		if(b % 70 != 0 && b / 70 == 0){
			c++;
		}
		if(b / 70 != 0){
			c += b / 70;
		}
		if(b % 70 != 0 && b / 70 != 0){
			c++;
		}
	}
	d = c * 0.1 * 1.0;
	printf("%.1lf", d);
	return 0;
}
