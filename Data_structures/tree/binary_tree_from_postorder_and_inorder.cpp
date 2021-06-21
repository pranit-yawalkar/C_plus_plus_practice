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
unordered_map<int, int>m;
Node* buildTree(int post[], int in[], int start, int end){
    static int idx = 0;
    if(start>end)
        return NULL;
    int curr = post[idx--];
    Node* node = new Node(curr);
    if(start == end)
        return node;
    if(node == NULL)
        return NULL;
    int pos = m[curr];
    node->right = buildTree(post, in, pos+1, end);
    node->left = buildTree(post, in, start, pos-1);
    return node;
}

void printInorder(Node* root){
    if(root==NULL)
        return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    int post[] = {4,2,5,3,1};
    int in[] = {4,2,1,5,3};
    for(int i=0;i<5;i++){
        m[in[i]] = i;
    }
    Node* node = buildTree(post, in, 0, 4);
    printInorder(node);
    return 0;
}