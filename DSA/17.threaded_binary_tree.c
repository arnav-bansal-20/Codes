#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left, *right;
    int lthread, rthread;
};
typedef struct Node *NODE;
NODE createNode(int data)
{
    NODE temp = (NODE)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    temp->lthread = 1;
    temp->rthread = 1;
    return temp;
}
NODE insert(NODE root, int data)
{
    NODE ptr = root;
    NODE parent = NULL;
    while (ptr != NULL)
    {
        if (data == ptr->data)
        {
            printf("Duplicate key\n");
            return root;
        }
        parent = ptr;
        if (data < ptr->data)
        {
            if (ptr->lthread == 0)
                ptr = ptr->left;
            else
                break;
        }
        else
        {
            if (ptr->rthread == 0)
                ptr = ptr->right;
            else
                break;
        }
    }
    NODE temp = createNode(data);
    if (parent == NULL)
        root = temp;
    else if (data < parent->data)
    {
        temp->left = parent->left;
        temp->right = parent;
        parent->lthread = 0;
        parent->left = temp;
    }
    else
    {
        temp->right = parent->right;
        temp->left = parent;
        parent->rthread = 0;
        parent->right = temp;
    }
    return root;
}
void inorder(NODE root)
{
    NODE ptr = root;

    if (ptr == NULL)
        return;

    // Move to leftmost node
    while (ptr->lthread == 0)
        ptr = ptr->left;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);

        // If thread exists, go directly
        if (ptr->rthread == 1)
            ptr = ptr->right;
        else
        {
            // Else go to leftmost of right subtree
            ptr = ptr->right;
            while (ptr != NULL && ptr->lthread == 0)
                ptr = ptr->left;
        }
    }
}

int main()
{
    NODE root = NULL;
    int choice, data;
    while (1)
    {
        printf("\n1.Insert\n2.Inorder Traversal\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            printf("Inorder Traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
