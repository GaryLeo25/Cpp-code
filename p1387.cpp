#include<bits/stdc++.h>
using namespace std;
int x;
int main(){
	cin >> x;
	if(x <= 6){
		cout << "L1";
	}else if(x <= 12){
		cout << "L2";
	}else{
		cout << "L3";
	}
	return 0;
}
