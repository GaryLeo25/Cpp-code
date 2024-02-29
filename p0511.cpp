#include<bits/stdc++.h>
using namespace std;
int x, y;
int a[1001][1001];
int mn = -1e9, row, col;
int main(){
	cin >> x >> y;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			cin >> a[i][j];
			if(a[i][j] > mn){
				mn = a[i][j];
				row = i;
				col = j;
			}
		}
	}
	cout << mn << endl;
	cout << row << endl;
	cout << col;
	return 0;
}
