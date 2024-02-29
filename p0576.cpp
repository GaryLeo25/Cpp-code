#include<bits/stdc++.h>
using namespace std;
int x, y;
int main(){
	cin >> x;
	y = x;
	if(x < 200){
		y = x;
	}else if(x >= 200 && x <= 299){
		y += 50;
	}else if(x >= 300 && x <= 499){
		y += 100;
	}else{
		y += 200;
	}
	cout << y;
	return 0;
}
