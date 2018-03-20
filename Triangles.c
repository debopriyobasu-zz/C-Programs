/* Calculating area and perimeter of an equilateral triangle and a right angled triangle using C
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 20/03/2018 
*/
#include<stdio.h> //preprocessor directive to include standard input and output.
#include<math.h>
int main(void){  // main function accepting no parameters.
	float a,b,h,area; //variable declaration
	printf("Enter the length of a side of the equilateral triangle. \n");
	scanf("%f",&a); //user input stored into variable a 
	printf("Enter the length of the base and the height of the right angled triangle. \n");
	scanf("%f\n%f",&b,&h); //base and height stored in b and h variables respectively.
	area = sqrt(3)/4*pow(a,2); //area of an equilateral triangle = 3^1/2 /4 * side * side.
	printf("The area of the equilateral triangle is: %.2f square units.",area ); //display results
	area = b*h/2; // area of a right angled triangle = base * height / 2.
	printf("\nThe area of the right angled triangle is: %.2f square units.",area); //display results
	return 0;
} //end of main function
