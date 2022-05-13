#include <stdio.h>

void dec_to_bin(int num)
{
    static int i = 31;
    if(i >= 0)
    {
        printf("%d", (num>>i) & 1?1 : 0);
        i--;
        dec_to_bin(num);
    }
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    dec_to_bin(num);

    return 0;
}
