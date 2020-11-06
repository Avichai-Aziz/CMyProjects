#include <stdio.h>

int fibo(int n) {
	int prev = 1, curr = 1, i = 1;
	while(i<n) {
		int temp = prev + curr;
		prev = curr;
		curr = temp;
		i++;
	}
	return curr;
}



int main() {
	printf("the 9th number in the fibo is: %d\n", fibo(9));
	
	return 0;
}


