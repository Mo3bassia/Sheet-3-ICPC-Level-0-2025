#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int result = 0;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (b > a) result +=1;
        if (c > a) result +=1;
        if (d > a) result +=1;
        cout << result << endl;
    }
    return 0;
}