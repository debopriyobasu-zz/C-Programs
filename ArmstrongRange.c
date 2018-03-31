/* To print Armstrong numbers within a given range
Version : 1.0
Program Author : Debopriyo Basu
Program creation date: 30/03/2018 
*/
#include <stdio.h>
#include <math.h>
int main(void){
    int lb,ub,i,temp1,temp2,rem,n = 0,arm = 0; //initialization and declaration of variables
    printf("Enter the lower bound and upper bound:\n");
    scanf("%d %d", &lb, &ub); //accepting upper bound and lower bound
    printf("Armstrong numbers between %d an %d are: ",lb,ub);
    for(i = lb + 1; i < ub; i++){
        temp1 = i; //temporary variable to store the number for modification to calculate no of digits
        temp2 = i; //temporary variable to store the number for modifications to calculate armstrong number
        // to find the number of digits in the number
        while (temp1 != 0){
            temp1 /= 10; //division of an integer by 10 to store divisor in temp,eliminates last digit
            ++n; //increase number of digits by 1
        }
        // arm contains sum of nth power of its digits
        while (temp2 != 0){
            rem = temp2 % 10; //last digit of the number
            arm += pow(rem, n); 
            temp2 /= 10;
        }
        // checks if number i is equal to the sum of nth power of its digits
        if (arm == i) {
            printf("%d ", i);
        }
        // reset values of n and arm for checking the next number
        n = 0;
        arm = 0;
    }
    return 0;
}
