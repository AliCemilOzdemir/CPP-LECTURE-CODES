// github.com/AliCemilOzdemir
// Fourth Week Slide Page 18

#include <iostream>
using namespace std;

int main() {
//     Task: Code up the below algorithm:
//  Initialize a counter
//  Print initial count
//  Keep looping until the counter is bigger than 100
//  in every iteration multiply count by 3
//  in every iteration print current value of count
//  Type the current value of count upon exit from loop


    // Step 1: Initialize a counter
    int count = 1;

    // Step 2: Print initial count
    cout << "Initial count: " << count << endl;

    // Step 3: Keep looping until the counter is bigger than 100
    while (count <= 100) {
        // Step 4: Multiply count by 3 in each iteration
        count *= 3;

        // Step 5: Print the current value of count in each iteration
        cout << "Current count: " << count << endl;
    }

    // Step 6: Print the final value of count after the loop ends
    cout << "Final count (after loop): " << count << endl;

    return 0;
}
