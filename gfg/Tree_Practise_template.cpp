#include<bits/stdc++.h>
using namespace std;

struct Node{
    struct Node* left;
    struct Node* right;
    int data;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }  
};

void function(Node* root){
    //Process
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->right = new Node(4);
    function(root);
    return 0;
}