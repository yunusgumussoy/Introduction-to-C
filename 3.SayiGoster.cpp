#include <stdio.h>
#include <conio.h>
int main(){
	int a=10;
	int b=3,c=7;
	printf("%d",a+b);
	printf("\n%d",a<<2); /* 10 = 1010 2 basamak sola kayd�r 0010 1000 = 40*/
	printf("\n%d",a>>2); /* 2 basamak sa�a kayd�r 0000 0010 = 2 */
	printf("\n%d",a+b*2);
	printf("\n%d",a%b); /* remainder operat�r�, b�lme i�leminden kalan 10 mod 3 =1 */
	printf("\n%d",a==b); /* e�ittir, 0 false, di�er rakamlar true */
	printf("\n%d",a>b); /* true 1 g�rece�iz */
	printf("\n%d",a++); /* post increment , a y� g�sterecek sonra 1 artt�racak */
	printf("\n%d",++a); /* pre increment , a y� �nce i�leme sok sonra g�ster */
	getch();
	return 0;
}
