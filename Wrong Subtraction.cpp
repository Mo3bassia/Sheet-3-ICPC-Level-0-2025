#include <iostream>
using namespace std;

int main() {
    long long number, i;
    cin >> number >> i;

    for (int x = 0; x < i; x++) {
        if (number % 10 == 0) {
            number /= 10;
        } else {
            number -= 1;
        }
    }
    cout << number << endl;

    return 0;
}