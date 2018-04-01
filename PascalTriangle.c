/*C program to display Pascal's Triangle of Nth order
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 01/04/2018
*/
#include<stdio.h>
void main(void){
	int r,i,j,k,a[100][100];
	printf("Enter the order of the Pascal's Triangle:\n");
	scanf("%d",&r);
	printf("--------Pascal's Triangle--------\n");
	//replace zeroeth column elements by 1
		for(i=0;i<=r;i++)
		{
			a[i][0]=1;
		}
		//replace diagonal elements by 1
		for(i=0;i<r;i++)
		{
			a[i][i]=1;
		}
		//current element = previous row previous column data + previous row current column data
		for(i=2;i<r;i++)
		{
			for(j=1;j<i;j++)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		for(i=0;i<r;i++)
		{	//k calculates whitespaces in the beginning
			for(k=(r-i);k>=0;k--)
			printf("%c",' ');
			for(j=0;j<r;j++)
			{
			//if element is 0,replace with a blank space
				if(a[i][j]==0)
					printf("%c",' ');
				else
					printf("%d ",a[i][j]);				
			}
			printf("\n");
		}
	}
