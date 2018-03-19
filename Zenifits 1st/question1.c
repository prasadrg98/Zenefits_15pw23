#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
 node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}


int main()
{

  int n;
  int i = 0;
  int* arr;
  arr = (int*)malloc(sizeof(int));
  for( i = 0; i < n; i++ ){
    scanf("%d",&arr[i]);
  }

  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  return 0;
}
