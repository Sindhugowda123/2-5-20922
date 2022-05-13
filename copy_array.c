
void scan_array(int *arr, int size);
void copy_array(int *arr, int *arr1, int size);
void print_array(int *arr1, int size);

int main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d", &size);
	int arr[size];
	int arr1[size];
	scan_array(arr, size);
	copy_array(arr, arr1, size);
	print_array(arr1, size);
}

void scan_array(int *arr, int size)
{
	printf("Enter array elements: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
}

void print_array(int *arr1, int size)
{
	printf("Copied array elements are: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

void copy_array(int *arr, int *arr1, int size)
{
	for(int i=0;i<size;i++)
	{
		arr1[i] = arr[i];
	}
}
