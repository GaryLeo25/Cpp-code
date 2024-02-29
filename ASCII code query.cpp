#include<bits/stdc++.h>
using namespace std;
int ASCII(char n){
	return int(n);
}
int main(){
	char x;
	cout << "请输入您要查询的ASCII码符号：" << endl;
	cin >> x;
	cout << "这就是你要查询的ASCII码：" << ' ' << ASCII(x);
	return 0;
}
