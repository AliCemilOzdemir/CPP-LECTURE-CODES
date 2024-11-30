// github.com/AliCemilOzdemir
// Fourth Week Slide Page 7

#include<iostream>
using namespace std;
int main()
{
    // ComputingFactorial
    int num;
    cout<< "Enterapositive integer factorial :";
    cin>>num;
    long result =1;
    int count=1;
    while ( count<=num)
    {
    result *=count;
    count+=1;
    }
    cout<<num<<"!equals"<<result <<endl;
    return 0;
}