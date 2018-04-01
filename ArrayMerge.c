/*C program to merge two different arrays
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 01/04/2018 
*/
#include<stdio.h>
#include<stdlib.h>
void main(void){
	int *p,*p1,i,j=0,size1,size2; //initialization and declaration of variables
	printf("Enter the size of the first array:\n");
	scanf("%d",&size1); //accepting size1
	p=(int *)malloc(size1*sizeof(int)); //dynamic allocation of memory
	printf("Enter the size of the second array:\n");
	scanf("%d",&size2); //accepting size2
	p1=(int *)malloc(size2*sizeof(int)); //dynamic allocation of memory
	printf("Enter the elements of the first array:\n");
	for(i=0;i<size1;i++) //for loop to accept elements of first array
		scanf("%d",p+i);
	printf("Enter the elements of the second array:\n");
	for(i=0;i<size2;i++) //for loop to accept elements of second array
		scanf("%d",p1+i);
	p=realloc(p,(size1+size2)*sizeof(int));	//reallocating memory of the first array
	for(i=0;i<size1+size2;i++){
		if(i>=size1){
			*(p+i)=*(p1+j); //merging two arrays to the first array
			j++;
		}
	}
	for(i=0;i<size1+size2;i++)
		printf("%d ",*(p+i)); //displaying the merged array
}
