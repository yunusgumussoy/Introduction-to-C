#include <stdio.h>
#include <conio.h>
int main(){
	int a=1,b;
	printf("Lutfen sayi girin :");
	scanf ("%d",&b);
	int flag=0;	 /*Asal say� bulma kodu*/
	while (a<b-1){
		a++;
		if(b%a==0){
			flag=1;
			break;	/*d�ng�y� k�rmak i�in*/
		}
	}
	if(flag==0)
	printf("Sayi Asal");
	else
	printf("Sayi Asal Degil");
	getch();
}
