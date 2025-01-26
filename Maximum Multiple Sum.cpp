#include <iostream>

using namespace std;

int multi(int f,int l) {
    int multi = 0;
    for (int i = f; i <= l; i = i + f)  {
        multi += i;
    }
    if (f == l) return l;
    return multi;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int result = 0;
        int y = 0;
        int c=0;
        int n;
        cin >> n;
        int x = 2;
        while(x <= n) {
            y = multi(x,n);
            if (y >= result) {
                result = y;
                c=x;
                // cout << "Y=>" << y <<endl;
            }
            x++;
        }
        
        cout << c  << endl;
    }
    return 0;
}