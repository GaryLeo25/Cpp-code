#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float y = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		y += 1.0/i;
	}
	printf("%.3f",y);
	return 0;
}
