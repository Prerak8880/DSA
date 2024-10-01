#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

bool search(struct Node *root, int key){

    if(root == NULL){
        return false;
    }
    
    if(root -> data == key){
        return true;
    }
    
    if(root -> data < key){
        return search(root -> right, key);
    }
    
    return search(root -> left, key);
}

struct Node *insert(struct Node *root, int value){
    if(root == NULL){
        return new Node(value);
    }
    
    if(value < root -> data){
        root -> left = insert(root -> left, value);
    }
    
    if(value > root -> data){
        root -> right = insert(root -> right, value);
    }
    
    return root;
}

int main(){
    
    struct Node *root = NULL;
    int n,value,key;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> value;
        root = insert(root,value);
    }
    
    cin >> key;
    int result = search(root,key);
    
    if(result){
        cout << "Yes";
    }
    else{
        cout << "False";
    }
    return 0;
}
