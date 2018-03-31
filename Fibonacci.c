/*To generate Fibonacci Series upto 10th term
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 31/03/2018 
*/
#include<stdio.h>
int main(void){
	int a=1,b=1,c,i; //declaration and initialization of variables
	printf("--------Fibonacci Series upto 10th Term--------\n");
	printf("%d %d ",a,b); //printing first two terms
	for(i=3;i<=10;i++){ //for loop to print from the third term to the tenth term
		c=a+b; // the next term is the sum of the previous two terms
		printf("%d ",c); //printing the next term of the fibonacci series
		a=b; // the next term is now the first previous term
		b=c; //the last term is now the second previous term
	}
	return 0;
}
