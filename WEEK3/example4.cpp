// github.com/AliCemilOzdemir
// Third Week Slide Page 13

 #include<iostream>
 using namespace std;
 int main()
{
// Example: Implement the following catalog grading
    int studentGrade = 80;
    
    if ( studentGrade>=90)//90 and above gets"A"
    {
    cout<<"A"<<endl;
    }
    else if ( studentGrade>=80)//80−89 gets "B"
    {
    cout<<"B"<<endl;
    }
    else if ( studentGrade>=70)//70−79 gets "C"
    {
    cout<<"C"<<endl;
    }
    else if ( studentGrade>=60)//60−69 gets "D"
    {
    cout<<"D"<<endl;
    }
    else // less than 60 gets "F"
    {
    cout<<"F"<<endl;
    }

return 0;
}