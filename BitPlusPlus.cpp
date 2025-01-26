#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement;
        if (statement == "X++" || statement == "++X") {
            x+=1;
        } else {
            x-=1;
        }
    }
    cout << x << endl;
    return 0;
}