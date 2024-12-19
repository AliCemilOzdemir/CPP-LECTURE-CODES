// github.com/AliCemilOzdemir
// Fifth Week Slide Page 15

#include <iostream>
using namespace std;

int main() 
{ 
    int height = 5;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <=height-i; j++)
        {
            cout<<" ";
        }
        for (int k = i; k <i*2; k++)
        {
            cout<<k;
        }
        for (int l = i*2-2; l >= i; l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    

    return 0;
} 
