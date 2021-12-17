#include <stdio.h>
#include <conio.h>
int fact(int);/*fact isminde int degerli fonksiyon*/ //faktoriyel fonksiyonumuz
int main(){
	printf("Lutfen sayi girin:");
	int x;
	scanf("%d",&x);
	printf("Faktoriyeli:%d",fact(x));
	getch();
}
int fact(int x){/*main den sonra fonksiyon yazýyoruz, önce de yazabiliriz*/
	int sonuc=1;
	for(int i=1;i<=x;i++){
		sonuc*=i;
	}
	return sonuc;
}
