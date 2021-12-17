#include <stdio.h>
#include <conio.h>
int main (){
int num;
	printf("Faktoriyelinin Hesaplanmasini Istediginiz sayiyi giriniz :");
	scanf("%d",&num);
	int fact=1;
		for(int i=1;i<=num;i++){
			fact=fact*i;
		}
		printf("%d",fact);
		getch ();
}
