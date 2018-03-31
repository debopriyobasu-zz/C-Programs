/*C program to solve second order quadratic equation 
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 30/03/2018 
*/
#include<stdio.h>
int main(void){
	float a,b,c,root1,root2; //declaration of variables
	printf("A second order quadratic equation is expressed in the form of ax2 + bx + c = 0.\nEnter the values of a,b and c.\n");
	scanf("%f %f %f",&a,&b,&c);
	root1 = -b + ((b*b - 4*a*c)/(2*a));//Using Sridhar Acharya's formula for root calculation
	root2 = -b - ((b*b - 4*a*c)/(2*a));
	printf("The roots of the equation %.2fx2 + %.2fx + %.2f = 0 are %.2f and %.2f",a,b,c,root1,root2); //displaying the results
	return 0;
}
