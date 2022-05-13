#include <stdio.h>

void fibonacci(int first, int second)
{
    printf("%d ", first);
    int fib = first + second;
    first = second;
    second = fib;
    if(fib < 500)
    {
        fibonacci(first, second);
    }
}

int main()
{
    int first = 0, second = 1;
    fibonacci(first, second);

    return 0;
}

