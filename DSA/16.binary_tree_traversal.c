#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node *NODE;
NODE create_node(int item)
{
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
// NODE insert(NODE root, int item)
// {
//     if (root == NULL)
//         return create_node(item);
//     prev=NULL;
// cur = root;
//    while (cur != NULL)
// {
//     prev = cur;
//     if (item < cur->data)
//         cur = cur->left;
//     else
//         cur = cur->right;
// }
// if (item < prev->data)
//     prev->left = create_node(item);
// else
//     prev->right = create_node(item);
// //     return root;
// }
NODE insert(NODE root, int item)
{
    if (root == NULL)
        return create_node(item);
    if (item < root->data)
        root->left = insert(root->left, item);
    else
        root->right = insert(root->right, item);
    return root;
}
void display(NODE root)
{
    if (root != NULL)
    {
        display(root->left); // inordrer traversal
        printf("%d\t", root->data);
        display(root->right);
    }
}
int count_nodes(NODE root)
{
    if (root == NULL)
        return 0;
    else if (root->left == NULL && root->right == NULL)
        return 1;
    else
        return count_nodes(root->left) + count_nodes(root->right) + 1;
}
int height(NODE root)
{
    int leftht, rightht;
    if (root == NULL)
        return -1;
    leftht = height(root->left);
    rightht = height(root->right);
    if (leftht > rightht)
        return leftht + 1;
    else
        return rightht + 1;
}
int leaf_nodes(NODE root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
        return leaf_nodes(root->left) + leaf_nodes(root->right);
}
int nonleaf_nodes(NODE root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    return nonleaf_nodes(root->left) + nonleaf_nodes(root->right) + 1;
}
int main()
{
    NODE root = NULL;
    int choice, item, n, i;
    while (1)
    {
        printf("\n1. Create Insert Nodes");
        printf("\n2. Display Tree (Inorder Traversal)");
        printf("\n3. Count Total Nodes");
        printf("\n4. Find Height of Tree");
        printf("\n5. Count Leaf Nodes");
        printf("\n6. Count Non-Leaf Nodes");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the elements:\n");
            scanf("%d", &item);
            root = insert(root, item);
            break;
        case 2:
            printf("\nThe Tree (Inorder Traversal):\n");
            display(root);
            break;
        case 3:
            printf("\nTotal Number of Nodes: %d", count_nodes(root));
            break;
        case 4:
            printf("\nHeight of Tree: %d", height(root));
            break;
        case 5:
            printf("\nTotal Leaf Nodes: %d", leaf_nodes(root));
            break;
        case 6:
            printf("\nTotal Non-Leaf Nodes: %d", nonleaf_nodes(root));
            break;
        case 7:
            exit(0);
        default:
            printf("\nInvalid Choice! Try Again.");
        }
    }
    return 0;
}