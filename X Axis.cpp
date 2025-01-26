#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int n;
    long long a,b,c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int first,second,third;
        cin >> a >> b >> c;
        first = abs(a-b) +  abs(a-c);
        second = abs(b-a) + abs(b-c);
        third = abs(c-b) + abs(c-a);
        // cout << "First:" << first << " Second:" << second << " Third:" << third << endl;
        cout << min(min(first,second), third) << endl;
    }

    return 0;
}