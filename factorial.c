#include <stdio.h>

int factorial(int num)
{
    if(num > 1)
    {
        return num * factorial(num - 1);
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("Factorial of %d: %d\n", num, fact);
    return 0;
}
