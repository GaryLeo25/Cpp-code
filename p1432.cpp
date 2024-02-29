#include<bits/stdc++.h>
using namespace std;
int x, y, z;
int a[10001][10001];
int main(){
	cin >> x >> y;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			cin >> a[i][j];
		}
	}
	cin >> z;
	int n = 0;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			if(a[i][j] > z){
				n++;
			}
		}
	}
	cout << n;
	return 0;
}
