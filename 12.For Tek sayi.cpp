#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=20;i<=100;i++){ //20 den başlayacak 100 e kadar 1 artırarak devam edecek
		if(i%2==1) //2 ye bölündüğünde 1 kalan yani tek sayıları yazdıracak
		printf("\n%d",i); 
	}
	getch();
}
