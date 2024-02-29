#include<bits/stdc++.h>
using namespace std;
int n[10001];
int x;
int main() {
	cin >> x;
	for(int i = 1; i <= x; i++){
		cin >> n[i];
	}
	for(int i = x; i >= 1; i--){
		cout << n[i];
	}
	return 0;
}
