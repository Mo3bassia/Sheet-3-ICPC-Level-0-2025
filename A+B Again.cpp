#include <iostream>

using namespace std;
int main() {
    int t;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> t;
        if (t >= 10 && t < 100) {
            cout <<  (t / 10) + (t % 10) << endl;
        }
    }
    return 0;
}