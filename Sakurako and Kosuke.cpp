#include <iostream>

using namespace std;

int calc(int n,bool check) {
    if (check) {
        // cout << "Func: " << ((2*n) -1) << endl;
        return ((2*n) -1);
    } else {
        // cout << "Func: " << -((2*n) -1) << endl;
        return -((2*n) -1);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        int x = 0;
        string turn = "Sakurako";
        cin >> a;
        for (int j = 1;; j++) {
            if (x>a || x < -a) break;
            if (j %2 == 0) {
                x += calc(j, true);
                turn = "Kosuke";
            } else {
                x += calc(j, false);
                turn = "Sakurako";
            }
        }
        cout << turn << endl;
    }
    return 0;
}
