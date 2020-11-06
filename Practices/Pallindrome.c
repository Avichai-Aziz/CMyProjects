
#include <stdio.h>
/*
this program checks checks whether a number is a palindrome
*/

int main()
{
    unsigned int n, reverse_n, copy_n;
    printf("Enter a positive integer: ");
    if ((scanf("%u", &n) != 1) || (n == 0)) {
        printf("Error, illegal input\n");
        return 1;
    }

    for (copy_n = n, reverse_n = 0; copy_n > 0; copy_n /= 10) {
        reverse_n *= 10;
        reverse_n += copy_n % 10;
    }
    printf("n=%u, reverse_n=%u\n", n, reverse_n);

    if (reverse_n != n) {
        printf("%u is not a pollindrome\n", n);
    }
    else {
        printf("%u is a pollindrome\n", n);
    }
    return 0;
}

