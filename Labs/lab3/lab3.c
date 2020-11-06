#include <stdio.h>

char my_toupper(char cr) {
    
    if(cr >= 'a' && cr <= 'z') {
        cr -= 32;
    }  
     return cr;
 }



int main() {
    char c, value;
    int arr[26] = {0};
    int i = 0;


    printf("Enter text: ");
    while(((c = getchar()) != '\n')) {
        value = my_toupper(c);
        if(value <= 'Z' && value >= 'A') {
            arr[value%65]++; 
        }
        
    }
    for(i; i<26; i++) {
        printf("%c\t%d\n",'A'+i, arr[i]);
    }

    return 0;
}

