#include<bits/stdc++.h>
using namespace std;
int x, y, num, ans;
int a[1000001];
int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		cin >> a[i];
	}
	cin >> num >> ans;
	for(int i = 1; i <= x; i++){
		if(i >= num && i <= ans){
			y += a[i];
		}
	}
	cout << y;
	return 0;
}
