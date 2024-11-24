// github.com/AliCemilOzdemir
// Third Week Slide Page 18

#include<iostream>
using namespace std;

int main()
{
//  Switch Example
    int k;
    cout<< "Enter a value between 1 and 3 :" ;
    cin>>k;
    switch(k)
    {
        case1:
            cout<< "one!"<<endl;
            break;
        case2:
            cout<< "two!"<<endl;
            break;
        case3:
            cout<< "three!" <<endl;
            break;
        default:
            cout<< "Didn't get it , did you?"<<endl ;
            break;
    }
}