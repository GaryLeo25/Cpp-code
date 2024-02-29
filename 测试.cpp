#include <iostream>
using namespace std;

int main() {
    char c = cin.get(); // 从输入流中获取第一个字符
    
    if (c == '\n') {
        cout << "用户已经换行" << endl;
    } else {
        cout << "用户未换行" << endl;
    }
    
    return 0;
}
