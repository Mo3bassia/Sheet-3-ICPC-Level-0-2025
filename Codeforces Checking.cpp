#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string check = "codeforces";
    while (t--) {
        string input;
        cin >> input;
        if (check.find(input) > check.length()) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        // cout << check.find(input) << endl;
    }
    return 0;
}