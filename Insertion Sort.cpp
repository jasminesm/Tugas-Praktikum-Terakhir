/*Nama  : Jasmine Sarah Maqnolia*/
/*NIM   : 20051397078*/
/*Kelas : 2020B*/
/*Prodi : Manajemen Informatika*/

#include <iostream>
#include <conio.h>
using namespace std;
int data[10],data2[10];
int n,i;
void tukar(int a, int b)
{
int t;
t = data[b];
data[b] = data[a];
data[a] = t;
}
void insertion_sort()
{
int temp,i,j;
for(i=1;i<=n;i++)
{
temp = data[i];
j = i -1;
while(data[j]>temp && j>=0)
{
data[j+1] = data[j];
j--;
}
data[j+1] = temp;
}
}
int main()
{
cout<<"  PROGRAM INSERTION SORT"<<endl;
cout<<"Masukkan Jumlah Data : ";
cin>>n;
cout<<"___________________________\n";
for(int i=1;i<=n;i++)
{
cout<<"Masukkan data ke "<<i<<"   : ";
cin>>data[i];
data2[i]=data[i];
}
insertion_sort();
cout<<"_________________________________________\n";
cout<<"Data Setelah di Insertion Sort : ";
for(i=1; i<=n; i++)
{
cout<<" "<<data[i];
}
}
