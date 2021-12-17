#include <stdio.h>
#include <conio.h>
int main(){
	
	int a;
	
	printf("Lutfen 2 ile tam bolunebilen negatif bir sayi giriniz:");
	
	scanf("%d",&a);
	if((a<0) && (a%2==0)) //Ve Operatörü
	{
		printf("Basarili");
	}
	else
	{
		printf("Basarisiz");
	}
}
