/*Nama  : Jasmine Sarah Maqnolia*/
/*NIM   : 20051397078*/
/*Kelas : 2020B*/
/*Prodi : Manajemen Informatika*/


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
int n;
int i;
int temp;
int minindex;
int j;
int data[i];

cout<<"Masukkan Jumlah Data :";cin>>n;
for(i=0; i<n; i++)
	{
	cout<<"Nilai ke-" <<i+1<<" = ";
	cin>>data[i];
	}
cout<<"Data sebelum di Selection Sort :";
for(i=0; i<5;i++)
{
cout<<setw(4)<<data[i];
}
for(i=0; i<5-1; i++) 
{
minindex=i;
for(j=i+1; j<5; j++) 
{
if(data[minindex]>data[j])
{
minindex=j;
}
}
temp=data[i];
data[i]=data[minindex];
data[minindex]=temp;
}
cout<<"Data setelah di Selection Sort :";
for(i=0; i<n; i++)
{
cout<<setw(4)<<data[i];
}
getch();
}

