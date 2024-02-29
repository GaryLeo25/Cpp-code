#include<bits/stdc++.h>
using namespace std;
int x, y;
double a[10001][10001];
int main(){
	cin >> x >> y;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			cin >> a[i][j];
		}
	}
	int n, m;
	cin >> n >> m;
	printf("%.2lf", a[n][m]);
	return 0;
}
