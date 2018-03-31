/*C program to reverse a number and find the sum of its digits
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 29/03/2018 
*/
#include<stdio.h>
int main(void){
	int n,sum=0,rev = 0,cpy; //initialization and declaration of variables
	printf("Enter the number which is to be reversed and the sum of digits is to be found: ");
	scanf("%d",&n); //accpeting the number
	if(n>=0 && n<10)
		printf("The reverse of the number %d is %d and the sum of digits is %d",n,n,n);
	else{
		cpy = n;
		while(cpy>0) //loop to reverse the number and find the sum of its digits
		{
			int rem = cpy%10;
			sum += rem;
			rev = rev*10 + rem;
			cpy/=10;
		}
		printf("The reverse of the number %d is %d and the sum of digits is %d",n,rev,sum);
	}
	return 0;
}
