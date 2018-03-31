/*To check a number taken as user input is a perfect number or not
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 31/03/2018 
*/
#include<stdio.h>
int main(void){
	int factor , factorsum =1 , num; //declaration and initialization of variables
	printf ("Enter a number: \n");
	scanf ("%d" , &num ); //Accepting the input number
	for(factor = 2; factor <= num/2 ; factor ++){ //for loop to check divisibility from 2 to number/2
		if(( num % factor ) == 0) //if the number is a factor
			factorsum += factor; //add it to the factorsum variable
	}
	if(num == factorsum) //perfect number condition check
		printf("The number %d is a Perfect Number.",num);
	else
		printf("The number %d is not a Perfect Number.",num);		
	return 0;
}
