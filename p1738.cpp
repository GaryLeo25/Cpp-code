#include<bits/stdc++.h>
using namespace std;
string isprime(int n){
	if(n <= 1) return "no";
	for(int i = 2; i <= n - 1; i++){
		if(n % i == 0){
			return "no";
		}
	}
	return "yes";
}
int main(){
	int x;
	cin >> x;
	cout << isprime(x);
	return 0;
}
