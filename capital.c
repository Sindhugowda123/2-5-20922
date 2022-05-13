#include <stdio.h>
#define SIZE 20

char first_capital(char *str)
{
    if(*str != '\0' && *str >= 65 && *str <= 92)
    {
        return *str;
    }
    else
    {
        first_capital(str + 1);
    }
}

int main()
{
    char str[SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    char first_cap = first_capital(str);
    printf("First capital is %c", first_cap);

    return 0;
}

