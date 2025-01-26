#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string capitals = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < capitals.length(); i++) {
        cin >> n;
        cout << capitals.substr(n-1,1);
    }
    return 0;
}