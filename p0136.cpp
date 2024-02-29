#include<bits/stdc++.h>
using namespace std;
int x1, x2, y, y2, a;
int main(){
	cin >> x1 >> y >> x2 >> y2;
	a = fabs(x1 - x2) + fabs(y - y2);
	cout << a; 
	return 0;
}
