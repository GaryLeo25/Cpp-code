#include<bits/stdc++.h>
using namespace std;
string isprime(int n){
	if(n <= 1) return "N";
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return "N";
		}
	}
	return "Y";
}
int main(){
	int x;
	cin >> x;
	cout << isprime(x);
	return 0;
}
