#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=20;i<=100;i++){ //20 den ba�layacak 100 e kadar 1 art�rarak devam edecek
		if(i%2==1) //2 ye b�l�nd���nde 1 kalan yani tek say�lar� yazd�racak
		printf("\n%d",i); 
	}
	getch();
}
