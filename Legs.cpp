#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    int t;
    while (tc--) {
        int count = 0;
        cin >> t;
        while (t) {
            if (t%4 == 0) {
                t-=4;
                count++;
            } else {
                t-=2;
                count++;
            }
            if (t == 0) break;
        }
        cout << count << endl;
    }
    return 0;
}