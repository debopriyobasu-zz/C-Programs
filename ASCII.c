/*To print all ASCII values by considering uppercase, lowercase and special characters
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 31/03/2018 
*/
#include<stdio.h>
int main(void){
	int i=0;//initialize i by 0
	while(i<=255) //Displays ASCII values from 0 to 255
    {
        printf("%d = %c \n",i,i); //display the number as well as the character in the display console.
        i++;
    }
	return 0;
}
