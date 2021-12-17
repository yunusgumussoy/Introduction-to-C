#include<stdio.h>

main()
{
	int prin,time;
	float rate,si;
	printf("Enter values of principal, duration and rate of interest:");
	scanf("%d%d%f", &prin, &time, &rate);
	si=prin*time*rate/100;
	printf("Simple interest is:%f", si);
}
