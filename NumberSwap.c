/*C program to swap two numbers using a third variable and without using it.
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 31/03/2018 
*/
#include<stdio.h>
void swap(int,int); //function prototype declaration
void swapvar(int,int); //function prototype declaration
int main(void){
	int x , y , ch; //decalaration of variables
	printf("Enter two numbers:\n");
	scanf("%d %d",&x,&y); //Accepting input
	printf("Enter your choice:\n1. Swap two numbers without using a third variable\n2.Swap two numbers using a third variable\n");
	scanf("%d",&ch); //accepting choice
	switch(ch){
		case 1:
			swap(x,y);//method to swap two numbers without using a third variable.
			break;
		case 2:
			swapvar(x,y);//method to swap two numbers using a third variable.
			break;
		default:
			printf("Incorrect choice entered."); //message if correct choice is not entered.
	}
	return 0;
}
void swapvar(int x,int y){//method to swap using a third variable
	int temp=x;
	x = y;
	y = temp;
	printf("The swapped numbers are: %d %d ",x,y);
}
void swap(int x, int y){ //method to swap without using a third variable.
	x = x + y;
	y = x - y;
	x = x - y;
	printf("The swapped numbers are: %d %d ",x,y);	
}
