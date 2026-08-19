#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node* NODE;
NODE create_node(int item)
{
    NODE temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
NODE insert(NODE root, int item)
{
    if(root == NULL)
        return create_node(item);
    if(item < root->data)
        root->left = insert(root->left, item);
    else
        root->right = insert(root->right, item);
    return root;
}
NODE search(NODE root, int key)
{
    if(root == NULL || root->data == key)
        return root;
    if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}
void preorder(NODE root)
{
    if(root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
NODE inordersuccessor(NODE root)
{
    NODE cur = root;
    while(cur->left != NULL)
        cur = cur->left;
    return cur;
}
NODE deletenode(NODE root, int key)
{
    NODE temp;
    if(root == NULL)
    {
        printf("\nNode not found\n");
        return NULL;
    }
    if(key < root->data)
        root->left = deletenode(root->left, key);
    else if(key > root->data)
        root->right = deletenode(root->right, key);
    else
    {
        if(root->left == NULL)
        {
            temp = root->right;
            free(root);
            printf("\nElement deleted\n");
            return temp;
        }
        else if(root->right == NULL)
        {
            temp = root->left;
            free(root);
            printf("\nElement deleted\n");
            return temp;
        }
        temp = inordersuccessor(root->right);
        root->data = temp->data;
        root->right = deletenode(root->right, temp->data);
    }
    return root;
}
int main()
{
    NODE root = NULL;
    int ch, item, key;
    while(1)
    {
        printf("\n1. Insert");
        printf("\n2. Preorder");
        printf("\n3. Inorder");
        printf("\n4. Postorder");
        printf("\n5. Delete");
        printf("\n6. Exit");
        printf("\nRead your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("\nRead element to be inserted: ");
                scanf("%d", &item);
                root = Insertbst(root, item);
                break;
            case 2:
                printf("\nPreorder traversal:\n");
                preorder(root);
                printf("\n");
                break;
            case 3:
                printf("\nInorder traversal:\n");
                inorder(root);
                printf("\n");
                break;
            case 4:
                printf("\nPostorder traversal:\n");
                postorder(root);
                printf("\n");
                break;
            case 5:
                printf("\nRead node to be deleted: ");
                scanf("%d", &key);
                root = deletenode(root, key);
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid Choice\n");
        }
    }
    return 0;
}