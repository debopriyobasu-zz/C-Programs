/* To display Prime numbers within a given range in descending order,stored in an array
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 30/03/2018 
*/
#include<stdio.h>
int main(void){
	int l,u,no,fctr,ctr,k=0,i;
	int prime[100];
	printf("--------Prime numbers within a given range--------");
	printf("\nEnter the lower bound and the upper bound:\n");
	scanf("%d %d",&l,&u);
	if(l>u) //if lower bound is greater than upper bound
		printf("\nBounds not entered correctly: Lower bound must be smaller than the upper bound.");
	else if(l == u ||(l<0 && u<0)) //if lower bound = upper bound or both of them are negative
		printf("\nNo integers found within the given range");
	else{
		if(l<0 && u>0)
			l=1; // if lower bound is negative, set lower bound to 1 as no prime numbers can be negative.
		for(no=u-1;no>l;no--){ //checking from upper bound-1 to lower bound+1
			ctr=0;
			//to find if the number is divisible by a number within the range or not
			for(fctr=2;fctr<=no/2;fctr++){
				if((no%fctr)==0){
					ctr++;
					break;
				}
			}
			//if the number is prime, add it to the array
			if(ctr==0 && no!=1){
				prime[k]=no;
				k++;
			}
		}
		for(i=0;i<k;i++)
			printf("%d ",prime[i]); //displaying the array storing the prime numbers
	}
	return 0;
}
