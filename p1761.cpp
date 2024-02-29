#include<bits/stdc++.h>
using namespace std;
long long MY_pow(int x, int y){
	long long num = 1;
	for(int i = 1; i <= y; i++){
		num *= x;
	}
	return num;
}
int main(){
	int a, b;
	cin >> a >> b;
	cout << MY_pow(a, b);
	return 0;
}
