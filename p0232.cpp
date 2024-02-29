#include<bits/stdc++.h>
using namespace std;
int x, y;
int a[10001][10001], b[10001][10001], c[10001][10001];
int main(){
	cin >> x >> y;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			cin >> a[i][j];
		}
	}
	for(int f = 1; f <= x; f++){
		for(int r = 1; r <= y; r++){
			cin >> b[f][r];			
		}
	}
	for(int n = 1; n <= x; n++){
		for(int m = 1; m <= y; m++){
			c[n][m] = a[n][m] + b[n][m];
		}
	}
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
