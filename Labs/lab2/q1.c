
#include <stdio.h>

int main()
{
    int num, biggest_num, lowest_num;
    
    printf("Enter a integer numbers:\n");
    scanf("%d", &num);
    biggest_num = num;
    lowest_num = num;
    
    while(scanf("%d",&num) != EOF) {
    
        if (num > biggest_num) {
            biggest_num = num;
        
        }
        
        if (num < lowest_num) {
            lowest_num = num;
        }
        
    }
    
    printf("the lowest number is: %d\n", lowest_num);
    printf("the biggest number is: %d\n", biggest_num);
            
    return 0;
}
