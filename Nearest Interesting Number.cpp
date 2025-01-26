#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= n;i++) {
        int four = (n /1000) %10;
        int three = (n /100)%10;
        int two = (n/10)%10;
        int one = n %10;
        int sum = three + one + two + four;
        if (sum % 4 == 0 && sum != 0) {
            cout << n << endl;
            break;
        } else if (sum== 0) {
            cout << 4 << endl;
        } else {
             n++;
             continue;
        }
    }

    return 0;
}