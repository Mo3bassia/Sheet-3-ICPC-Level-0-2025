#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 0) {
            if (b == 0) {
                cout << "YES" << endl;
            } else if (b %2 ==0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (a %2 == 1) {
            cout << "NO" << endl;
        } else {
            if (b %2 == 0) {
                cout << "YES" << endl;
            } else if (b %2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}