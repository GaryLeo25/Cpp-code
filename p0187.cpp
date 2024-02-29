#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n <= 1) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
bool hw(int n){
	int f = n, s = 0;
	while(f){
		s = s * 10 + f % 10;
		f = f / 10;
	}
	return n == s;
}
int main(){
	int x, y;
	cin >> x >> y;
	for(int i = x; i <= y; i++){
		if(isprime(i) && hw(i)){
			cout << i << endl;
		}
	}
	return 0;
}
