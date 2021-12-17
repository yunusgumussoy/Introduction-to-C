#include <stdio.h>
#include <conio.h>
int main(){
	int girilen;
	int ortalama;
	int n;
	int toplam;
	while(girilen!=-1){
		printf("Lutfen sayi girin");
		scanf("%d",&girilen);
		n++;
		toplam=toplam+girilen;
	}
	n--;
	toplam+1;
	printf("\nGirilen Sayi:%d,Toplam:%d,Ortalama:%d",n,toplam,toplam/n);
	getch();
}
