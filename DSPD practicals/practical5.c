#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* createTree() {
    int data;
    printf("Enter data (0 for no node): ");
    scanf("%d", &data);

    if (data == 0) {
        return NULL;
    }

    struct Node* root = createNode(data);

    printf("Enter left child of %d:\n", data);
    root->left = createTree();

    printf("Enter right child of %d:\n", data);
    root->right = createTree();

    return root;
}

void displayTree(struct Node* root) {
    if (root == NULL)
        return;

    displayTree(root->left);
    printf("%d ", root->data);
    displayTree(root->right);
}

int main() {
    printf("Create your binary tree:\n");
    struct Node* root = createTree();

    printf("\nInorder traversal of the binary tree:\n");
    displayTree(root);

    printf("\n");
    return 0;
}
