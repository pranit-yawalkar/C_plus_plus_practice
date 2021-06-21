#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

void sumReplace(Node* root){
    if(root==NULL)
        return;
    
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=NULL)
        root->data += root->left->data;
    if(root->right!=NULL)
        root->data += root->right->data;    
}

void preOrder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    Node* root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    preOrder(root); cout<<endl;
    sumReplace(root);
    preOrder(root); cout<<endl;
    return 0;
}