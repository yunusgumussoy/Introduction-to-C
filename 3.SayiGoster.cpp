#include <stdio.h>
#include <conio.h>
int main(){
	int a=10;
	int b=3,c=7;
	printf("%d",a+b);
	printf("\n%d",a<<2); /* 10 = 1010 2 basamak sola kaydýr 0010 1000 = 40*/
	printf("\n%d",a>>2); /* 2 basamak saða kaydýr 0000 0010 = 2 */
	printf("\n%d",a+b*2);
	printf("\n%d",a%b); /* remainder operatörü, bölme iþleminden kalan 10 mod 3 =1 */
	printf("\n%d",a==b); /* eþittir, 0 false, diðer rakamlar true */
	printf("\n%d",a>b); /* true 1 göreceðiz */
	printf("\n%d",a++); /* post increment , a yý gösterecek sonra 1 arttýracak */
	printf("\n%d",++a); /* pre increment , a yý önce iþleme sok sonra göster */
	getch();
	return 0;
}
