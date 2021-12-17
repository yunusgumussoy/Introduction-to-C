#include <stdio.h>
main() {
	int a;
	float b;
	a=7.8; //a yý int olarak atadýk yukarda fakat deðer float o yüzden a nýn deðerinin tam sayý kýsmýný alacak
	b=150;
	printf("a equals %d", a); //a float yani virgüllü olmasýna raðmen int gibi %d ile gösterdik
	printf("\nb equals %f", b); //b int yani tam sayý olmasýna raðmen float gibi %f ile gösterdik
}
