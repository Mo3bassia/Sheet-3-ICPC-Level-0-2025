#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    long long a,b,c;
    for (int i = 0; i < number; i++) {
        cin >> a >> b >> c;
        if (a+b==c) cout << "+" << endl;
        else if (a-b==c) cout << "-" << endl;
    }
    return 0;
}