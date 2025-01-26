#include <iostream>
using namespace std;

// long long sum(int a, int b) {
//     string num1 = to_string(a);
//     string num2 = to_string(b);
//     string result = "";
//     int carry = 0;
//     for (int i = 0; i < num1.length(); i++) {
//         for (int j = 0; j < num2.length(); j++) {
//             if (i == j) {
//                 int f = stoi(string(1,num1[i]));    
//                 int s = stoi(string(1,num2[j]));
//                 cout << "SUM =>" << f+s  << endl;
//             }
//         }
//     }
//     cout << result << endl;

//     return (long long)1000;
// }

int main() {
    int t;
    cin >>t;
    while(t--) {
        long long a,b,c;
        cin >> a >> b >> c;
        long long sum = a + b + c;
        cout << sum/2 << endl;
    }
    return 0;
}