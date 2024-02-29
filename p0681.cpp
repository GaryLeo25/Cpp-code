#include<bits/stdc++.h>
using namespace std;
int main(){
	int x, y = 0;
	cin >> x;
	if(x % 2 == 1){
		for(int i = 2; i <= x; i += 2){
			y += i;
		}
	}else{
		for(int i = 1; i <= x; i++){
			if(x % i == 0){
				y += i;
			}
		}
	}
	cout << y; 
	return 0;
}
