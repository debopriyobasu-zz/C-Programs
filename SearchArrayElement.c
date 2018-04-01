/*C program to search an element in an array
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 01/04/2018 
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int *p,size,ele,i,flag=0,pos; //declaration and initializatiojn of variables
	printf("Enter the size of the array:\n");
	scanf("%d",&size); //accepting size from user
	p=(int *)malloc(size*sizeof(int)); //dynamic allocation of memory
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",p+i); //accepting elementsof the array from the user
	printf("Enter the element to be searched in the array:\n");
	scanf("%d",&ele); //accepting element to be searched
	for(i=0;i<size;i++){
		if(*(p+i)==ele){ //condition checks if element in the array pointed is equal to the search element
			flag=1;	
			pos=i+1;
			break;
	}
	}
	if(flag) //if flag is true(1), then display element and position
		printf("The element %d is found in the array at position %d",ele,pos);
	else //if flag is false(0), then display not found message
	printf("The element %d is not found in the array.",ele);
	return 0;
}
