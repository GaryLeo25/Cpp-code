#include<bits/stdc++.h>
using namespace std;
int x, y, num, ans;
int a[1000001];
int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		cin >> a[i];
	}
	cin >> y;
	cout << a[y];
	return 0;
}
