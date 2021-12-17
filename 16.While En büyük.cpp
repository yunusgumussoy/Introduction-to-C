#include <stdio.h>
#include <conio.h>
int main(){
	int girilen=0;
	int enbuyuk=0;
	while (girilen!=-1){
		printf ("Lutfen sayi girin:");
		scanf("\n%d", &girilen);
		if (girilen>enbuyuk)
		enbuyuk=girilen;
	}
	printf("\nEn buyuk sayi:%d", enbuyuk);
	getch();
}
