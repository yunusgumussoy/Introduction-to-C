#include <stdio.h>
#include <conio.h>
int main(){
	int girilen;
	int enbyk=0;
	for (int i=0;i<3;i++){
		printf("\nLutfen sayý giriniz");
		scanf("%d",&girilen);
		printf("\nSimdiye kadarki enbuyuk:%d", enbyk);
		if (girilen>enbyk)
		enbyk=girilen;
	}
	printf("\nenbuyuksayi:%d", enbyk);
	getch();
}
