#include<bits/stdc++.h>
using namespace std;
int x;
int a[10001];
int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= x; i++){
		int cnt = 0;
		for(int j = 1; j < i; j++){
			if(a[i] > a[j]){
				cnt++;
			}
		}
		cout << cnt << ' ';
	}
	return 0;
}
