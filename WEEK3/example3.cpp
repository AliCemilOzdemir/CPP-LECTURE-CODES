// github.com/AliCemilOzdemir
// Third Week Slide Page 12

 #include<iostream>
 using namespace std;
 int main()
{
// Example: Implement the following catalog grading
    int studentGrade = 80;
    
    if (studentGrade<=100 && studentGrade>=90)//90andabove gets"A"
    {
    cout<<"A"<<endl;
    }
    if ( studentGrade<90&&studentGrade>=80)//80−89gets"B"
    {
    cout<<"B"<<endl;
    }
    if ( studentGrade<80&&studentGrade>=70)//70−79gets"C"
    {
    cout<<"C"<<endl;
    }
    if ( studentGrade<70&&studentGrade>=60)//60−69gets"D"
    {
    cout<<"D"<<endl;
    }
    if (studentGrade<60&&studentGrade>=0)// lessthan60gets"F"
    {
    cout<<"F"<<endl;
    }

return 0;
}