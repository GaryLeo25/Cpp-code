#include<bits/stdc++.h>
using namespace std;
int x, y;
int a[10001][10001];
int main(){
	cin >> x >> y;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
