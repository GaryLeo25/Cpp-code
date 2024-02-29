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
int main(){
	int x, cnt;
	cin >> x;
	for(int i = 2; i <= x - 2; i++){
		if(isprime(i) && isprime(i + 2)){
			cout << i << ' ' << i + 2 << endl;
			cnt++;
		}
	}
	if(cnt == 0){
		cout << "empty"; 
	}
	return 0;
}
