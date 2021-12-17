#include <stdio.h>
#include <conio.h>
int main(){
	int a=10;
	int b=3,c=4;
	int d;
	printf("\na:%d,b:%d,c:%d", a,b,c);
	printf("\nBir sayi giriniz:");
	scanf("%d",&d); /* girilen deðeri yukarda tanýmladýðýmýz d deðiþkenine atýyoruz */
	printf("\nGirilen sayi:%d",d);
	getch();
	return 0;
}
