#include <stdio.h>
//main in dýþýna yazýlan deðiþkenler global, 
//içine yazýlan deðiþkenler lokal
main()
{
	int prin, time;
	float rate; /* virgüllü sayýlar için */
	float si;
	prin=1000;
	rate=10.5;
	time=3;
	si=prin*rate*time/100;
	printf("Simple Interest=%f",si);
}
