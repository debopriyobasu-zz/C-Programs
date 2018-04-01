/* To convert Celsius to Fahernheit and from Fahrenheit to Celsius with the use of Call by Value and Call by Address
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 30/03/2018 
*/
#include<stdio.h>
//function to convert celsius to fahrenheit
float celToFar(float c)
{
	float far;
	far=(9*c/5)+32;
	return far;
}
//function to convert fahrenheit to celsius
float farToCel(float *f)
{
	float cel;
	cel=(*f-32)*5/9;
}
void main(void)
{
	float f,c;
	int ch;
	printf("--------Temperature Conversion--------");
	printf("Enter your choice:\n1.Fahrenheit to Celsius Conversion\n2.Celsius to Fahrenheit conversion\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the temperature in Fahernheit:\n");
			scanf("%f",&f);
			c=farToCel(&f); //call by address
			printf("The temperature is: %.2f C",c);
			break;
		case 2:
			printf("Enter the temperature in Celsius:\n");
			scanf("%f",&c);
			f=celToFar(c); //call by value
			printf("The temperature is: %.2fF",f);
			break;
		default:
			printf("Incorrect choice entered.");			
	}
}
