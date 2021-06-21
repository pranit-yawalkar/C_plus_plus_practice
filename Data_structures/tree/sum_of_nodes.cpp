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

int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left) + sumNodes(root->right) + root->data;
}

int main(){
    Node* root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    root->right->left = new Node(13);
    root->right->right = new Node(16);
    cout<<sumNodes(root)<<endl;
    return 0;
}