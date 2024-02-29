#include<bits/stdc++.h>
using namespace std;
int n[10001];
int x;
int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		cin >> n[i];
	}
	for(int j = 1; j <= x; j++){
		if(j == n[j]){
			cout << n[j] << ' ';
		}
	}
	return 0;
}
