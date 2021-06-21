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

int countNode(Node* root){
    if(root==NULL)
        return 0;
    return countNode(root->left) + countNode(root->right) + 1;
}

int main(){
    Node* root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    root->right->left = new Node(13);
    root->right->right = new Node(16);
    cout<<countNode(root)<<endl;
    return 0;
}