#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int indexRow;
    int indexCol;
    int result;
    for (int i = 0; i < 5; i++) {        
        for (int j = 0; j < 5; j++) {
            cin >> n;
            if (n == 1) {
                indexRow = i + 1;
                indexCol = j + 1;
                break;
            }
        }
    }
    if (indexRow != 3) {
        result += abs(indexRow-3);
    }
    if (indexCol != 3) {
        result += abs(indexCol-3);
    }
    cout << result << endl;
    return 0;
}