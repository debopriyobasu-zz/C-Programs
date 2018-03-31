/*To read integers from an array and reverse them using pointer
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 31/03/2018 
*/
#include<stdio.h>
void main(void) {
	int size,i,arr[100],*ptr; //declaration and initialization of variables
	ptr=&arr[0]; //pointer ptr stores address of first element of the array
	printf("\nEnter the size of array :\n");
	scanf("%d",&size); //size of array stored in size
 	printf("\nEnter %d integers into array:\n", size);
    for (i=0;i<size;i++){
      scanf("%d", ptr); //element stored in address pointed by integer pointer
      ptr++; //increment pointer to point to the next location
    }
    ptr=&arr[size-1];  //to set the pointer to the address of the last element of the array
    printf("\nElements of array in reverse order are :\n");
    for(i=size-1;i>=0;i--){
      printf("\nElement %d is %d.",i+1,*ptr); //displays the elements of the array in reverse order
      ptr--; //decrement pointer to point to the previous location
   }
}
