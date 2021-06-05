#include<stdio.h>

int m,n;

int rekursif(int n){
	if(n>0){
		printf("%d\n",n);
		return n-rekursif(n-1);
		}else{
		}
		return 0;
	}

int main(){
	printf("Masukkan Angka : ");
	scanf("%d",&m);
	rekursif(m);
	return 0;
}
