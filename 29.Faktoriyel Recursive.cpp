#include <stdio.h>
#include <conio.h>
int f(int);
int main(){
	printf("Lutfen sayi girin:");
	int n;
	scanf("%d",&n);
	printf("Faktoriyeli:%d",f(n));
	getch();
}
int f(int n){
	if(n==0)
	return 1;
	return n*f(n-1);/*fonksiyonu kendi i�inde tan�mlad�k recursive-�zyineli*/
}
