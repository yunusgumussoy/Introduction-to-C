#include <stdio.h>
#include <conio.h>
int main (){
int a[10]; /*10 elemanl�k bir dizi*/ //ayn� t�rden de�i�kenleri tutar
for (int i=0;i<10;i++){
	a[i]=i; //a dizisinin i. eleman�
a[0]=0;
a[1]=1;
}
printf("%d",a[4]);
}
