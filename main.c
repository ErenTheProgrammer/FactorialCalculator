#include <stdio.h>
int main()
{
    int i, n, factorial = 1;
    printf("Enter The Number: ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        factorial = factorial * i;
    }

    printf("Factorial of the number is: %d", factorial);
    return 0;
}
