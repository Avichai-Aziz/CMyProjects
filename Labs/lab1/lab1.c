
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i,randNum, counterEven = 0, counterOdd = 0; /*define variable */
    printf("Enter a number: ");
    scanf("%d", &n); /*input from the user */
    if (n>0 && n<100) /*check if the number between 1 to 99 include */
    { 
        for(i=0; i<n; i++)
        {
            randNum = rand();
            if (randNum % 2 == 0) 
            {
                counterEven++;
            }
            else {
                counterOdd++;
            }
        }
        printf("there is: %d even random numbers\n", counterEven);
        printf("there is: %d odd random numbers\n", counterOdd);
    }
    
    else 
    {
        printf("Error, number must be between 1 to 99 include");
        return 1;
    }
    return 0;
}
