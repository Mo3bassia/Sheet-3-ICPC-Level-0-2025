#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string time;

    for (int i = 0; i < n; i++) {
        cin >> time;
        string hours, minutes;
        int realHour;
        string flag;
        hours= time.substr(0,2);
        minutes= time.substr(3,2);
        realHour = stoi(time.substr(0,2));
        if (realHour < 12 && realHour != 0) {
            flag = "AM";
        }
        else if (realHour == 12) {
            flag = "PM";
        }
        else if (realHour == 0) {
            flag = "AM";
            realHour = 12;
        }
        else if (realHour > 12) {
            realHour -= 12;
            flag = "PM";
        }

        if (realHour < 10) cout << "0" << realHour << ":" << minutes << " " << flag << endl;
        else if (realHour == 0) cout << "12" << ":" << minutes << " " << flag << endl;
        else cout << realHour << ':' << minutes << " " << flag << endl;
    }
    return 0;
}