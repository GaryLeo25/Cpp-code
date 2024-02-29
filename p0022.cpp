#include<bits/stdc++.h>
using namespace std;
int n, m = 1;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		m = m * (n - i);
	}
	cout << m;
	return 0;
}
