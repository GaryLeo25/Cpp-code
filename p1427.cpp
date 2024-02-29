#include<bits/stdc++.h>
using namespace std;
int x, y;
int main(){
	cin >> x;
	for(int i = 0; i <= x; i = i + 2){
		if(i % 10 != 0){
			y = y + i;
		}
	}
	cout << y;
	return 0;
}
