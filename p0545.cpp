#include<bits/stdc++.h>
using namespace std;
int x, y = 0;
int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			y += i;
		}
	}
	cout << y;
	return 0;
}
