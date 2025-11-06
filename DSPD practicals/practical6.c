#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};

struct node *create(int x){
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
newnode->data = x;
newnode->left=NULL;
newnode->right= NULL;

return newnode;
}

struct node *insert(struct node *root,int x){
if(root==NULL){
root=create(x);
}
else if(x<root->data){
root->left = insert(root->left,x);
}
else{
root->right=insert(root->right,x);
}
return root;
}

void inorder(struct node *root){
if(root!=NULL){
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
}

struct node *delete(struct node* root,int key){
if(root==NULL){
return NULL;
}
if(key<root->data){
root->left = delete(root->left,key);
}
else if(key>root->data){
root->right = delete(root->right,key);
}
else{
if(root->left==NULL && root->right==NULL){
free(root);
return NULL;
}
else{
printf("This is not a leaf node\n");
}
}
return root;

}


void search(struct node *root,int key){
if(root==NULL){
return;
}
else{
if(root->data==key){
printf("found\n");
return;
}
}
search(root->left,key);
search(root->right,key);
}

int main(){
struct node *root=NULL;
int x,choice,key;
while(1){
printf("\nMENU\n1.INSERT\n2.INORDERR TRAVERSAL\n3.SEARCH\n4.DELETE\n5.EXIT\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter an element to insert: ");
scanf("%d",&x);
root=insert(root,x);
break;
case 2:
inorder(root);
break;
case 3:
printf("Enter an element to search: ");
scanf("%d",&key);
search(root,key);
break;
case 4:
printf("Enter a value to delete\n");
scanf("%d",&key);
root = delete(root,key);
break;
default:
exit(0);
}
}
return 0;
}