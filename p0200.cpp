#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x = i;
		bool flag = 0;
		if (x % 7 == 0) flag = true;
		while(x){
			if(x % 10 == 7){
				flag = true;
			}
			x /= 10;
		}
		if(flag == 0){ 
			sum += i * i;
		}
	}
	cout << sum;
	return 0;
}
