//Creating a binary search tree and traversing it using in order, preorder and post order.
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int key;
struct node *left,*right;
};
struct node *newnode(int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
struct node *insert(struct node*,int);
void main()
{
struct node *root=NULL;
root=insert(root,50);
insert(root,30);
insert(root,10);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,60);
insert(root,80);
insert(root,88);
printf("\n\n************************************\n");
printf("\n\t\t InorderTraversal of tree\n\n");
inorder(root);
printf("\n\n************************************\n");
printf("\n\t\t preoder Traversal of tree\n\n");
preorder(root);
printf("\n\n************************************\n");
printf("\n\t\t post order traversal \n\n");
postorder(root);
printf("\n\n*************************************\n");
getch();
}
struct node *newnode(int item)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->key=item;
temp->left=temp->right=NULL;
return temp;
}
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d\t",root->key);
inorder(root->right);
}
}
void preorder(struct node *root)
{
if(root!=NULL)
{
printf("%d\t",root->key);
preorder(root->left);
preorder(root->right);
}
}
void posrorder(struct node *root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d\t",root->key);
}
}
struct node *insert(struct node *node,int key)
{
if(node==NULL)
return newnode(key);
if(key<node->key)
node->left=insert(node->left,key);
else
if(key>node->key)
node->right=insert(node->right,key);
return node;
}
