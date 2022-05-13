#include <stdio.h>

void scan_array(int *arr, int size);
void count_freq(int *arr, int size);

int main()
{
    int size;
	printf("Enter array size: ");
	scanf("%d", &size);
	int arr[size];
	scan_array(arr, size);
	count_freq(arr, size);
	
	return 0;
}

void scan_array(int *arr, int size)
{
	printf("Enter array elements: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
}


void count_freq(int *arr, int size)
{
    int count,i , j;
    for(i = 0;i < size;i++)
    {
        count = 1;
        for(j = 0;j <= i;j++)
        {
            if(arr[j] == arr[i])
            {
                break;
            }
        }
        if(j == i)
        {
            for(int k = i+1;k < size;k++)
            {
                if(arr[i] == arr[k])
                {
                    count++;
                }
            }
            printf("Frequency of value %d : %d\n", arr[i], count);
        }
    }
}


