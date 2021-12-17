#include <stdio.h>
#include <conio.h>
int main(){
	float miles;
	printf("Mesafeyi mil olarak giriniz:");
	scanf("%f", &miles);
	
	printf("Km olarak mesafe: %f",miles*1.6);
	printf("\nFeet olarak mesafe: %f",miles*5280);
	printf("\nInch olarak mesafe: %f",miles*5280*12);
	
	return 0;
}
