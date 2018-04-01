/*To find the second largest element and the smallest element from an array.
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 01/04/2018 
*/
#include<stdio.h>
#include<stdlib.h>
void main(void){
	int *p,n,i,max,max2,min; //declaration of variables
	printf("Enter the number of elements to be entered into the array:\n");
	scanf("%d",&n); //input
	p=(int *)malloc(n*sizeof(int)); //dynamic allocation of memory
	for(i=0;i<n;i++)
		scanf("%d",p+i); //inputting array elements
	max=*p;max2=*p;min=*p; //the variables max,max2 and min are initialized with the value of the starting position of the array
	for(i=0;i<n;i++){
		if(*(p+i)>max) //if anything is greater than max, then max equals to that
			max=*(p+i);
		if(*(p+i)<min)
			min=*(p+i); //if anything is lesser than min, then min equals to that
		if(*(p+i)>max2 && *(p+i)<max)
			max2=*(p+i); //if anything is greater than max2 but lesser than max, then max2 is equal to that
	}
	printf("The second largest element in the array is: %d\nThe smallest element in the array is %d",max2,min);//display results
}
