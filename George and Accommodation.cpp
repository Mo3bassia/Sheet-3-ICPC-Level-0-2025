#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a,b;
    int result = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (b-a >= 2) result +=1;
    }
    cout << result << endl;   
     return 0;
}