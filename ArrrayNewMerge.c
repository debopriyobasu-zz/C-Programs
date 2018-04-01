/*C program to input two arrays and copy their individual content to a third array
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 01/04/2018 
*/
#include<stdio.h>
#include<stdlib.h>
void main(void){
	int *p,*p1,*p2,i,j=0,size1,size2,size3; //initialization and declaration of variables
	printf("Enter the size of the first array:\n");
	scanf("%d",&size1); //accepting size1
	p=(int *)malloc(size1*sizeof(int)); //dynamic allocation of memory
	printf("Enter the size of the second array:\n");
	scanf("%d",&size2); //accepting size2
	size3=size1+size2;
	p1=(int *)malloc(size2*sizeof(int)); //dynamic allocation of memory
	p2=(int *)malloc(size3*sizeof(int)); //dynamic allocation of memory
	printf("Enter the elements of the first array:\n");
	for(i=0;i<size1;i++) //for loop to accept elements of first array
		scanf("%d",p+i);
	printf("Enter the elements of the second array:\n");
	for(i=0;i<size2;i++) //for loop to accept elements of second array
		scanf("%d",p1+i);
	for(i=0;i<size3;i++){
		if(i<size1)
			*(p2+i)=*(p+i);//merging the first array to the third array
		if(i>=size1){
			*(p2+i)=*(p1+j); //merging the second array to the third array
			j++;
		}
	}
	printf("The merged array is:\n");
	for(i=0;i<size3;i++)
		printf("%d ",*(p2+i)); //displaying the third array
}
