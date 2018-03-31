#include<stdio.h>
int fact(int);
int factrec(int);
int main(void){
	//to find the factorial of a number using recursion and by not using recursion
	int ch,n;
	while(1){
		printf("\nEnter your choice:\n");
		printf("\n1. Factorial of a number using recursion.\n2. Factorial of a number without using recursion.\n3. Exit\n");
		scanf("%d",&ch);
		printf("Enter the number whose factorial is to be found:\n");
		scanf("%d",&n);
		if(ch == 3)
			break;
		else{
			switch(ch){
				case 1:
					printf("The factorial of the number %d is %d",n,factrec(n));
					break;
				case 2:
					fact(n);
					break;
				default:
					printf("Please enter the correct choice.");		
			}
		}
}
	return 0;
}
factrec(n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n*fact(n-1);
}
fact(n){
	int f = 1,i;
	for(i = n;i>=1;i--)
		f *= i;
		
	return f;	
}
