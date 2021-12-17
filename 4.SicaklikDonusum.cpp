#include <stdio.h>
#include <conio.h>
int main(){
	float temp;
	printf("Sicakligi Celcius Derece olarak giriniz:");
	scanf("%f", &temp);
	
	printf("Fahrenheit olarak sicaklik: %f",temp*1.8+32);
	
	return 0;
}
