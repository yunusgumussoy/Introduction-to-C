#include <stdio.h>
#include <conio.h>
int fact(int);/*fact isminde int degerli fonksiyon*/
int main(){
	printf("Lutfen sayi girin:");
	int x;
	scanf("%d",&x);
	printf("Faktoriyeli:%d",fact(x));
	printf("\nFaktoriyelin faktoriyeli:%d",fact(fact(x))); // int atad���m�z i�in b�y�k say�lar� hesaplayamaz
	getch();
}
int fact(int x){/*main den sonra fonksiyon yaz�yoruz, �nce de yazabiliriz*/
	int sonuc=1;
	for(int i=1;i<=x;i++){
		sonuc*=i;
	}
	return sonuc;
}
