#include<bits/stdc++.h>
using namespace std;
int x, y;
int a[1001][1001];
int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= x; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= x; j++){
			if(i == j || i + j == x + 1){
				y += a[i][j];
			}
		}
	}
	cout << y;
	return 0;
}
