// github.com/AliCemilOzdemir
// Fifth Week Slide Page 11

#include <iostream>
using namespace std;

int main() 
{
    // Drawing a Pyramid
    int height;
    cout<<"How high should the pyramid be: ";
    cin>>height;
/*
n yüksekliği için
1) 1. satırda yıldız yazımı için bırakması gereken boşluk sayısı: n-1 , 1 tane yıldız yazılacak.
2) 2. satırda yıldız yazımı için bırakması gereken boşluk sayısı:n-2, 3 tane yıldız yazılacak
3) 3.satırda yıldız yazımı için  bırakması gereken boşluk sayısı:n-3, 5 tane yıldız yazacak
.
.
.
yukarıdaki örüntüye göre programımızı yazalım:
*/
for (int i = 1; i <= height; i++)
{
    for (int j = i; j <= height-1 ; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <= 2*i-1; k++)
    {
        cout<<"*";
    }

    cout<<endl;    
}


    return 0;
} 
