// github.com/AliCemilOzdemir
// Third Week Slide Page 29

#include <iostream>
using namespace std;

int main() {
// (a) Write a C++ program that takes in the index of a month (1 for January, 2
//  for February, ...etc.) and displays how many days there are in that month.

    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            cout << "31 days in this month." << endl;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            cout << "30 days in this month." << endl;
            break;
        case 2: // February
            cout << "28 days in this month." << endl;
            break;
        default:
            cout << "Invalid month number!" << endl;
    }

    return 0;
}
