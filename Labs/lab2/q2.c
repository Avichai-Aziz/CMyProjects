#include <stdio.h>

int main() {
    
    float number;

    printf("Enter numbers between (-100,100):\n");

    while(scanf("%f",&number) != EOF) {
        if (number > -100 && number < 100) {
            if (number >= 0) {
                
                printf("+%06.3f\n" ,number);
            }
                           
            else 
            {    
                printf("%07.3f\n" ,number);

            }
            
            
        }
    
        else
        {
            printf("Error, number must be between (-100,100)\n");

        }
    }
        
    return 0;

}
