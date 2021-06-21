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


int getDia(Node* root, int* height){
    if(root==NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ld = getDia(root->left, &lh);
    int rd = getDia(root->right, &rh);
    int currDia = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currDia, max(ld, rd));
}


int main(){
    Node* root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    // root->left->right->right = new Node(10);
    // root->left->right->right->right = new Node(5);
    // root->left->right->right->right = new Node(4);
    root->right->left = new Node(13);
    root->right->right = new Node(16);
    int height = 0;
    cout<<getDia(root, &height)<<endl;
    return 0;
}