/* Calculating area and perimeter of a circle using C
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 20/03/2018 
*/
#include<stdio.h> //preprocessor directive to include standard input and output.
#define PI 3.14159 //declaration of value of PI as a constant
int main(void){  // main function accepting no parameters.
	float r; //variable declaration for storing the value of radius.
	printf("Enter the radius of the circle : \n"); //asking the user for input.
	scanf("%f", &r); //accepting the user input into the variable r.
	// displaying the results;Formula for area and cirmumference of a circle is PI*R*R and 2*PI*R respectively.
	printf("The area of the circle is : %.2f \nThe circumference of the circle is : %.2f \n", PI*r*r , 2* PI*r); 
	return 0;  //return 0 for a successful execution of the program.
} //end of main function
