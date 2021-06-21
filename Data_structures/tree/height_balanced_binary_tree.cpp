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

// O(N^2) approach
int height(Node* root){
    if(root==NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

bool isBalanced(Node* root){
    if(root==NULL)
        return true;
    if(isBalanced(root->left)==false)
        return false;
    if(isBalanced(root->right)==false)
        return false;
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1)
        return true;
    return false;
}

// O(N) approach
bool isBal(Node* root, int* height){
    if(root==NULL)
        return true;
    int lh = 0, rh = 0;
    if(isBal(root->left, &lh)==false)
        return false;
    if(isBal(root->right, &rh)==false)
        return false;
    *height = max(lh, rh) + 1;
    if(abs(lh-rh)<=1)
        return true;
    return false;
}

int main(){
    Node* root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    root->left->right->right = new Node(14);
    int height = 0;
    cout<<isBal(root, &height)<<endl;
    return 0;
}