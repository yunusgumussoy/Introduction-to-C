#include <stdio.h>

main()
{
	int a=60;
	printf("%d",a);
	printf("\n%d",&a);
	printf("\nSola kaydirma islemi:%d", a<<3);
	printf("\nSaga kaydirma islemi:%d", a>>3);
	printf("\nUnary islemi:%d", ~a); //yakla��k i�areti i�im ALTGR + � 
}
