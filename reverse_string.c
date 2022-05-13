#include <stdio.h>
#define SIZE 20

void reverse(char *str)
{
    if(*str != '\0')
    {
        reverse(str+1);
        printf("%c", *str);
    }
}

int main()
{
    char str[SIZE];
    printf("Enter the string: ");
    scanf("%s", str);
    reverse(str);

    return 0;
}

