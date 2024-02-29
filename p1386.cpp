#include<bits/stdc++.h>
using namespace std;
double x, y, z, w;
int main(){
	cin >> x >> y;
	for(int i = 1; i <= x; i++){
		cin >> z;
		w += z;
	}
	if(w / x >= y){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
