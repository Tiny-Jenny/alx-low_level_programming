#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
    int a = 1, b = 2;
    int n;
    
    printf("%d, %d, ", a, b);
    
    for (n = 3; n <= 98; ++n) {
        int next = a + b;
        
        if (n != 98) {
            printf("%d, ", next);
        } else {
            printf("%d\n", next);
        }
        
        a = b;
	b = next;
    }
    
    return 0;
}
