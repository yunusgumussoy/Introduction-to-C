#include <stdio.h>
#include <conio.h>
int main (){
	int a;
	int b=5;
	int c=2;
	
	// XOR i�lemi ^ ile g�sterilir a^b 
	printf("\n%d", a=b&c); /* & ve i�lemi , 5= 0000 0101
											2= 0000 0010
										   5&2=0000 0000
										   5|2=0000 0111 = a=0 ��kar*/
	printf("\n%d", b=c|a&2); /* | veya i�lemi, b=2 ��kar */
	printf("\n%d", c=c<<2); /* 0000 0010 <<2= 0000 1000 =8 */
	getch ();
	return 0;
}
