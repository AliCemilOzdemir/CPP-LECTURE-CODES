// github.com/AliCemilOzdemir
// Third Week Slide Page 11

 #include<iostream>
 using namespace std;
 int main()
 {
    // Good Practices-2:Prevent Code Duplication
    int age;
    
    cout<<"Enter your age: ";
    cin>>age;
    if ( age<0 || age>120)
    {
    cout<< " illegal input" <<endl;
    }
}