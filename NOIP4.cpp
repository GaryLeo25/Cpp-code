#include<bits/stdc++.h>
using namespace std;
int h, m, s, t;
int main(){
	cin >> h >> m >> s >> t;
	cout << t / 3600 + h << " " << t % 3600 / 60 + m << " " << t % 60 + s;
	return 0;
}
