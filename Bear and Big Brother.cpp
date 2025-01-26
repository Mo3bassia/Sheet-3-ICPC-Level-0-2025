#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int result = 0;

    for (int i =0; i < 100;i++) {
        a = a *3;
        b= b*2;
        result +=1;
        if (a>b) break;
    }

    cout << result << endl;
    return 0;
}