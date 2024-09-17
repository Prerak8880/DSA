#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  Node *left;
  Node *right;

  Node(int value){
    data = value;
    left = right = NULL;
  }
};

Node *insert(struct Node *root, int value){
  if(root == NULL){
    return new Node(value);
  }
  else{
    
  }
}

void inOrder(struct Node *root){
  if(root == NULL){
    return;
  }
  inOder(root -> left);
  printf("%d ",root -> data);

  inOder(root -> right);
}

int main()
{
    Node *root = NULL;
    int n,value;
    scanf("%d",&n);

  for(int i=0; i<n; i++){
      scanf("%d",&value);
      root = insert(root, value);
  }
  
  inOrder(root);
  
  return 0;
}
