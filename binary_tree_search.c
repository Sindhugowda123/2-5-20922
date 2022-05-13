#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Bst;

Bst *insert(Bst *root, int data);
int search(Bst *root, int data);
void inorder(Bst* root);

Bst *Newnode(int data)
{
    Bst *newnode = (Bst *)malloc(sizeof(Bst));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main()
{
    Bst *root = NULL;
    root = insert(root, 15);
    insert(root, 10);
    insert(root, 20);
    insert(root, 5);
    insert(root, 25);
    printf("Inorder traversal: ");
    inorder(root);
    int number;
    printf("\nEnter number to be searched: ");
    scanf("%d", &number);
    if(search(root, number) == 1)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }
}

Bst *insert(Bst *root, int data)
{
    if(root == NULL)
    {
        root = Newnode(data);
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorder(Bst* root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int search(Bst *root, int data)
{
    if(root == NULL)
    {
        return 0;
    }
    else if(root->data == data)
    {
        return 1;
    }
    else if(data <= root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}


