// github.com/AliCemilOzdemir
// Third Week Slide Page 8

 #include<iostream>
 using namespace std;
 int main()
{
    //  Example: Checking Whether TheUser Input is Valid
    int age;

    cout<<"Enter your age: " ;
    cin>>age;
    
    if ( age<0)
    {
        cout<< " illegal input" <<endl ;
    }
    else if ( age>120)
    {
        cout<< " illegal input"<<endl;
    }
}