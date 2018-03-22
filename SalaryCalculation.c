/* Gross and Net Salary Calculation from given data:
DA = 45% of basic salary
TA = 15% of basic salary
House Rent = 12.5% of basic salary
PF Contribution = Rs. 5000
Income Tax deduction = 2500/month
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 22/03/2018 
*/
#include<stdio.h>
int main(void)
{
	float da,ta,hr,pf = 5000.00 ,tax = 2500.00,gross,net,basic; //variable declaration
	char name[30]; //array to store the name  whitespaces
	printf("Enter your name :\n");
	gets(name); //accepting the name from the user
	printf("Enter your basic salary:\n");
	scanf("%f",&basic); //accepting basic salary from the user
	printf("\n---------------Salary Calculation of %s for the current financial year:---------------\n",name);
	da = 0.45 * basic; //calculation of dearness allowance
	ta = 0.15 * basic; //calculation of travel allowance
	hr = 0.125 * basic; //calculation of house rent allowance
	gross = basic + da + hr + ta; //calculation of gross salary
	net = gross - pf - tax; //calculation of net salary
	printf("Gross Salary = %.2f\nNet Salary = %.2f",gross,net); //displaying of results
	return 0;
} //end of main function
