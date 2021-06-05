/*Nama  : Jasmine Sarah Maqnolia*/
/*NIM   : 20051397078*/
/*Kelas : 2020B*/
/*Prodi : Manajemen Informatika*/


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    
   int val[100];
   int i, n, t;

   cout<<"Masukkan Jumlah Data  : ";cin>>n;
   for(i = 0; i < n; i++)
   {
       cout<<"Nilai ke-"<<1+i<<"  : ";cin>>val[i];
   }

    for(int w = n/2; w > 0;w=w/2)
    {
       for(int x = w; x < n; x++)
      {
          for (int y = x-w; y >= 0; y-=w)
         {
             if(val[y+w] < val[y]) //Note
            {
                t=val[y+w];
               val[y+w]=val[y];
               val[y]=t;
            }
         }
      }
   }

   cout<<"DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
   for(i = 0; i < n; i++)
   {
       cout<<val[i]<<" ";
   }
   getch();
}
