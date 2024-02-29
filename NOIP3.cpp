#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin >> t;
	cout << t / 3600 << " " << t % 3600 / 60 << " " << t % 60;
	return 0;
}
