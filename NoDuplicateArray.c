/*To delete duplicate elements from an array and display the results
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 31/03/2018 
*/
#include<stdio.h>
#include<stdlib.h>
void main(void){
	int *p,n,i,j,k; //declaration of variables
	printf("Enter the number of elements to be stored in the array:\n");
	scanf("%d",&n); //store the no of elements in n
	p=(int *)malloc(n*sizeof(int)); //dynamic allocation of memory
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",p+i); //new elements stored in address directed by the pointer
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i)==*(p+j)){ //if a duplicate element is found
				for(k=j;k<n-1;k++){
					*(p+k)=*(p+k+1); //remove the last occurance of the duplicate element
					n--; //reduce the size of the array by 1
				}
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",*(p+i)); //display the array free of duplicates
}
