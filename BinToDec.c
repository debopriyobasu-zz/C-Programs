/* C program to convert Binary to Decimal
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 01/04/2018 
*/
#include<stdio.h>
#include<math.h>
void main(void)
{
	int no,tmp,rem,dec=0,power=0; //Initialization and declaration of variables
	printf("Enter the binary number:\n");
	scanf("%d",&no);
	tmp=no;
	//extract the digits and raise them to the power of 2 according to their place value. Add it to dec
	while(tmp>0)
	{
		rem=tmp%10;
		dec=dec+rem*pow(2,power);
		tmp/=10;
		power++;
	}
	printf("The decimal conversion of the binary number %d is %d",no,dec); //display the results
}
