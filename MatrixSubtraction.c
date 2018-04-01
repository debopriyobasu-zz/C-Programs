/*C program to subtract two mxn matrices
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 01/04/2018
*/
#include<stdio.h>
#include<stdlib.h>
//declaration of variables
int **a,**b,r,c,i;
//function prototype declaration
void getElements(int **);
void displayElements(int **);
void subMatrices(int **,int **);
int main(void){
    //accepting size of rows and columns
    printf("Enter the number of rows of the matrix:\n");
    scanf("%d",&r);
    printf("Enter the number of columns of the matrix:\n");
    scanf("%d",&c);
    //dynamic allocation of memory
    a=(int **)malloc(r*sizeof(int *));
        for (i=0; i<r; i++)
         a[i] = (int *)malloc(c * sizeof(int));
    b=(int **)malloc(r*sizeof(int *));
        for (i=0; i<r; i++)
        b[i] = (int *)malloc(c * sizeof(int));
    //accepting elements of the matrix
    printf("Enter the elements of the first matrix:\n");
    getElements(a);
    printf("Enter the elements of the second matrix:\n");
    getElements(b);
    //displaying elements of the matrix
    displayElements(a);displayElements(b);
    //addition of two matrices
    subMatrices(a,b);
    return 0;
}
//function to accept elements of a matrix
void getElements(int **m){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter Element:\n");
            scanf("%d",(*(m+i)+j));
        }
    }
}
//function to display elements of a matrix
void displayElements(int **m){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",*(*(m+i)+j));
        }
        printf("\n");
    }
}
//function to subtract two matrices
void subMatrices(int **x,int **y){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
//subtract the elements of the second matrix from the first matrix and store it in the first matrix
            *(*(x+i)+j) -= *(*(y+i)+j);
        }
    }
    printf("The new matrix is:\n");
    displayElements(x);
}
