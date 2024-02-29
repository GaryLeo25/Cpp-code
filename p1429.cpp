#include<bits/stdc++.h>
using namespace std;
int x, num, ans;
int a[1000001];
int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		cin >> a[i];
	}
	cin >> num >> ans;
	for(int i = 1; i <= x; i++){
		if(i >= num && i <= ans){
			cout << a[i] << ' ';
		}
	}
	return 0;
}
