include <stdio.h>
#include<string.h>

int check_palindrome(char *str, int index, int size)
{
    if(index >= size)
    {
        return 1;
    }
    if(str[index] == str[size])
    {
        check_palindrome(str, index + 1, size - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    int res = check_palindrome(str, 0, strlen(str) - 1);
    if(res == 1)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }
    return 0;
}
