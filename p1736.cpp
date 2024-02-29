#include<bits/stdc++.h>
using namespace std;
int bos(int a, int b){
	if(a > b){
		return 0;
	}else if(a < b){
		return 1;
	}else{
		return 2;
	}
}
int main(){
	int x, y, a;
	cin >> x >> y;
	a = bos(x, y);
	if(a == 0){
		cout << '>';
	}else if(a == 1){
		cout << '<';
	}else{
		cout << '=';
	}
	return 0;
}
