// github.com/AliCemilOzdemir
// Fifth Week Slide Page 10

#include <iostream>
using namespace std;

int main() 
{ 
// Drawing Half Pyramids
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<char('A'+i);
        }
        cout<<endl;
    }
    

    return 0;
} 
