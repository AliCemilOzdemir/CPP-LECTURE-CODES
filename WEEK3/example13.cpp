// github.com/AliCemilOzdemir
// Third Week Slide Page 29

#include <iostream>
using namespace std;

int main() {
    int month, year;
    
//     Exercise- 1
//  (a) Write a C++ program that takes in the index of a month (1 for January, 2
//  for February, ...etc.) and displays how many days there are in that month.
//  (b) Now modify the above code, this time accounting for leap years (i.e.,
//  when February is 29 days instead of 28).
    cout << "Enter the year: ";
    cin >> year;
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
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "29 days in February (Leap Year)." << endl;
            } else {
                cout << "28 days in February." << endl;
            }
            break;
        default:
            cout << "Invalid month number!" << endl;
    }

    return 0;
}
