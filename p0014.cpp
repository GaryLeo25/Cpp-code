#include<bits/stdc++.h>
using namespace std;
int main(){
	int x, y;
	cin >> x;
	y = x%2;
	if(y <= 0){
		cout << "even";
	}else{
		cout << "odd";
	}
	return 0;
}
