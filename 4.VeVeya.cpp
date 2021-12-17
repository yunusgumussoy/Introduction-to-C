#include <stdio.h>
#include <conio.h>
int main (){
	int a;
	int b=5;
	int c=2;
	
	// XOR iþlemi ^ ile gösterilir a^b 
	printf("\n%d", a=b&c); /* & ve iþlemi , 5= 0000 0101
											2= 0000 0010
										   5&2=0000 0000
										   5|2=0000 0111 = a=0 çýkar*/
	printf("\n%d", b=c|a&2); /* | veya iþlemi, b=2 çýkar */
	printf("\n%d", c=c<<2); /* 0000 0010 <<2= 0000 1000 =8 */
	getch ();
	return 0;
}
