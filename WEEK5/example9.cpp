// github.com/AliCemilOzdemir
// Fifth Week Slide Page 13

#include <iostream>
#include <string>
using namespace std;

int main() 
{ 
    //  Example: Implement Password Control
    string psw;
    cout<<"enter a 5-digit password :";
    cin>>psw;
    if(psw.length() == 5)
    {
        string value;
        int counter = 1;
        do
        {
            cout<<"Enter your password :";
            cin>>value;
            if(value == psw)
            {
                cout<<"Login Successful!"<<endl;
            }
            else if(counter == 3)
            {
                cout<<"Your account has been locked"<<endl;
                // break;
                break;
            }
            counter++;
        }while(value != psw);

    } // there is not an else block, because there was not any command for passwords which are not 5-digit.

    return 0;
} 
