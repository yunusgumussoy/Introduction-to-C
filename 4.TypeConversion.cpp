#include <stdio.h>
main() {
	int a;
	float b;
	a=7.8; //a y� int olarak atad�k yukarda fakat de�er float o y�zden a n�n de�erinin tam say� k�sm�n� alacak
	b=150;
	printf("a equals %d", a); //a float yani virg�ll� olmas�na ra�men int gibi %d ile g�sterdik
	printf("\nb equals %f", b); //b int yani tam say� olmas�na ra�men float gibi %f ile g�sterdik
}
