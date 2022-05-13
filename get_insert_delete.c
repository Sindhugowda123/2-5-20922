#include<stdio.h>
#include<stdlib.h>

int insert(int arr[]);
int delete(int arr[]);
int get(int arr[]);

static int size = 5;

int main()
{
  int arr[size], i, option;
  printf ("Enter the elements of the array: ");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &arr[i]);
    }
  while (1)
  {
      printf ("1.Insert\n2.Delete\n3.Getdata\n4.Exit\n");
      printf ("Enter the option: ");
      scanf ("%d", &option);
      switch (option)
      {
	     case 1: insert (arr);
	              break;
	     case 2: delete (arr);
	             break;
	     case 3: get (arr);
	             break;
	     case 4: exit (0);

	   }
  }
  return 0;
}

int insert(int arr[])
{
  int num, pos, i;
  printf ("Enter the data you want to insert: ");
  scanf ("%d", &num);
  printf ("Enter position: ");
  scanf ("%d", &pos);

  if (pos < 0 || pos > size + 1)
    {
      printf ("Invalid position\n");
    }
  else
    {
      for (i = size; i >= pos; i--)
	  {
	      arr[i + 1] = arr[i];
	  }
      arr[pos] = num;
      size++;
      printf ("After Inserting: ");
      for (i = 0; i < size; i++)
	  {
	       printf ("%d ", arr[i]);
	  }
      printf ("\n");
    }
  return 0;
}

int delete(int arr[])
{
  int pos, i;
  printf ("Enter the position you want to delete: ");
  scanf ("%d", &pos);

  if (pos < 0 || pos > size)
    {
      printf ("Invalid position\n");
    }
  else
    {
      for (i = pos; i < size; i++)
	  {
	     arr[i] = arr[i + 1];
	  }
      size--;
      printf ("After deletion: ");
      for (i = 0; i < size; i++)
	  {
	     printf ("%d ", arr[i]);
	  }
      printf ("\n");
    }
  return 0;
}

int get(int arr[])
{
  int pos, i;
  printf ("Enter the position to get the data: ");
  scanf ("%d", &pos);
  for (i = 0; i < size; i++)
    {
      if (i == pos)
	  {
	      printf ("The element is %d\n", arr[i]);
	  }
    }

  return 0;
}

