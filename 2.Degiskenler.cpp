#include <stdio.h>
//main in d���na yaz�lan de�i�kenler global, 
//i�ine yaz�lan de�i�kenler lokal
main()
{
	int prin, time;
	float rate; /* virg�ll� say�lar i�in */
	float si;
	prin=1000;
	rate=10.5;
	time=3;
	si=prin*rate*time/100;
	printf("Simple Interest=%f",si);
}
