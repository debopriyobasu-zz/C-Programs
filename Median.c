/* Find Median of 3 numbers
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 22/03/2018 
*/
#include<stdio.h> //preprocessor directive to include standard I/O commands in the program
int main(void){
	float a,b,c; //to store 3 numbers that will be input by the user.
	float median(float,float,float);//function prototype declaration
	printf("Enter 3 numbers:\n");
	scanf("%f %f %f",&a,&b,&c); //accepts the three numbers from the user and stores them.
	printf("\nThe median of %.2f , %.2f and %.2f is %.2f",a,b,c,median(a,b,c)); //displays the median of the three numbers
	return 0;
} //end of main function
float median(float a,float b,float c) //function declaration
{
	float med = a > b ? (b > c ? b : c) : (a > c ? a : c) ; //med stores the middle number out of the three numbers when sorted in ascending order
	return med;
} //end of median function
