// github.com/AliCemilOzdemir
// Fourth Week Slide Page 17

#include<iostream>
using namespace std;
int main()
{
    int number;

    // Continue asking for input until it's between 1 and 10
    do {
        cout << "Please enter an integer between 1 and 10: ";
        cin >> number;

        if (number < 1 || number > 10) {
            cout << "Invalid input. The number must be between 1 and 10." << endl;
        }
    } while (number < 1 || number > 10);

    // If the input is valid, print the number
    cout << "You entered a valid number: " << number << endl;
    
    return 0;
}