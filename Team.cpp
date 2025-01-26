#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        int a,b,c;
        cin >> a >> b >> c;
        count += a;
        count += b;
        count += c;
        if (count >= 2) result+=1;
    }
    cout << result << endl;
 
    return 0;
}