/* Menu driven program to find area of square and rectangle
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 22/03/2018 
*/
#include<stdio.h> //preprocessor directive to include standard I/O commands in the program
int main(void){
	float a,b,c; //to store 3 numbers that will be input by the user.
	float greatest(float,float,float); //function prototype declaration
	float smallest(float,float,float); //function prototype declaration
	printf("Enter 3 numbers:\n");
	scanf("%f %f %f",&a,&b,&c);
	printf("\nThe greatest number among %.2f , %.2f and %.2f is %.2f",a,b,c,greatest(a,b,c));
	printf("\nThe smallest number among %.2f , %.2f and %.2f is %.2f",a,b,c,smallest(a,b,c));
	return 0;
} //end of main function 
float greatest(float a, float b,float c) //function definition
{
	float big = a;
	big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
	return big;
} //end of greatest function 
float smallest(float a, float b,float c) //function definition
{
	float small = a;
	small = a < b ? (a < c ? a : c) : (b < c ? b : c) ;
	return small;	
}// end of smallest function
