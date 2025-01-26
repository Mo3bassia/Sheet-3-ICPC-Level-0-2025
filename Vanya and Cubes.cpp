// Not Accepted and hard one
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    int count = 0;
    int index = 0;
    for (int i = 1; i <= n; i++) {
        // result += i;
            if (count >= n) break;
        for (int j = 1; j <= n; j++) {
            // if (result >= j) break;
            // cout << "Result:" << result << endl;
            result +=j;
            count += result;
            if (count >= n) {
                index = j;
                break;
            }
        }
    }
    if (index == 1) {
        cout << index<<endl;
    } else {
        cout << index -1 << endl;
    }
    return 0;
}