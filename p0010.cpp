#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,maxn;
	cin >>a >>b >>c;
	if(a > b){
		maxn = a;
	}
	else{
		maxn = b;
	}
	if(c > maxn){
		maxn = c;
	}
	cout <<maxn;
	return 0;
}
