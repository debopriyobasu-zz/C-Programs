/* Menu driven program to perform arithmetic operations
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 21/03/2018 
*/
#include<stdio.h>
int main(void)
{
	float n1,n2; //floating point variables to store two numbers on which the operations are to be performed
	int ch; // integer variable to store choice
	printf("Enter two numbers:\n");
	scanf("%f %f",&n1,&n2); //accepting two numbers from the user and storing it in n1 and n2 respectively
	while(1)
	{
		printf("\nEnter your choice:\n1->Addition\n2->Subtraction\n3->Multiplication\n4->Division\n5->Exit\n");
		scanf("%d",&ch);
		if(ch==5) //if choice is 5, stop executing the infinite while loop
		break;
		else{
			switch(ch)
			{
				case 1:
					printf("The Addition of the two numbers %f and %f is %.2f.",n1,n2,n1+n2); //Addition
					break;
				case 2:
					printf("The Subtraction of the two numbers %f and %f is %.2f.",n1,n2,n1-n2); //Subtraction
					break;
				case 3:
					printf("The Multiplication of the two numbers %f and %f is %.2f.",n1,n2,n1*n2); //Multiplication
					break;
				case 4:
					printf("The Division of the two numbers %f and %f is %.2f.",n1,n2,n1/n2); //Division
					break;
				default:
					printf("Kindly enter the correct choice."); //If incorrect choice is entered, this message is displayed
			} //end of switch-case
		} //end of else condition
	} //end of infinite while loop
	return 0;
} //end of main function
