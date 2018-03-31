/*C program to find sum of odd and even numbers within a given range and to find their sum separately
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 29/03/2018 
*/
#include<stdio.h>
int main(void){
	int l,u,sumo = 0,sume = 0,ctro = 0,ctre = 0,i; //declaration of variables
	printf("--------To find the total number of odd and even numbers within a given range and find their sum separately--------\n");
	printf("Enter the lower bound and the upper bound of the range:\n");
	scanf("%d %d",&l,&u); //accepting lower bound and upper bound
	for(i = l+1;i<u;i++){
		if(i%2 == 0){ //even
			sume += i; //add to even sum
			ctre++; //increment even counter
		}
		else{ //odd
			sumo += i; //add to odd sum
			ctro++; //increment odd counter
		}
	}
	//display the results
	printf("The number of odd numbers within the range %d to %d is %d and their sum is %d.\nThe number of even numbers within the range %d to %d is %d and their sum is %d.",l,u,ctro,sumo,l,u,ctre,sume);
	return 0;
	
}
