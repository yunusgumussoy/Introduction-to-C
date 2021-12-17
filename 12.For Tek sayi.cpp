#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=20;i<=100;i++){ //20 den baþlayacak 100 e kadar 1 artýrarak devam edecek
		if(i%2==1) //2 ye bölündüðünde 1 kalan yani tek sayýlarý yazdýracak
		printf("\n%d",i); 
	}
	getch();
}
