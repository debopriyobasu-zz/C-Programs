/* Menu driven program to find area of square and rectangle
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 21/03/2018 
*/
#include<stdio.h>
int main(void){
	int ch; //variable for storing user choice
	float l,b,a; //l: length of rect, b: breadth of rect, a: side of square
	void rectangle(float,float); //function prototype declaration
	void square(float); //function prototype declaration
	printf("Enter 1 for Rectangle.\nEnter 2 for Square.\n"); 
	scanf("%d",&ch); //storing user choice in ch variable
		switch(ch)
		{
		case 1: 
			printf("Enter the length and breadth of the rectangle:\n");
			scanf("%f %f",&l,&b);
			rectangle(l,b); //calling rectangle function
			break;
		case 2:
			printf("Enter the length of one side of the square:\n");
			scanf("%f",&a);
			square(a); //calling square function
			break;
		default:
			printf("Incorrect choice."); //to show when input is anything other than 1 and 2
			break;
		}
	return 0;
} //end of main function
void rectangle(float l,float b) //function definition
{
	printf("The area of the rectangle is : %.2f", l*b); //area of rectangle = length * breadth
	printf("\nThe perimeter of the rectangle is : %.2f", 2*(l+b)); //perimeter of rectangle = 2 * (length + breadth)
}
void square(float a) //function definition
{
	printf("The area of the square is : %.2f", a*a); //area of square = length of one side ^2
	printf("\nThe perimeter of the square is : %.2f", 4*a); //perimeter of square = 4* length of one side
}
