#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has data, pointer to left
   child and a pointer to right child */
struct Node {
    int data;
    Node *left, *right;
};
 
/* Helper function that allocates a new node */
Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 

vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> v;
   if(!root) return v;
   queue<Node*> lq;
   Node* node = root;
   while(node) {
       v.push_back(node->data);
       if(node->left) lq.push(node->left);
       if(node->right) node=node->right;
       else {
           if(!lq.empty()){
               node=lq.front();
               lq.pop();
           }
           else node = NULL;
       }
   }
   return v;
}
int main()
{   /*           8
               /  \
              3    10
             / \    \
            1   6     14
               / \    /
              4   7  13  */
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
    vector<int> w=diagonal(root);
    for(int i=0;i<w.size();i++){
      cout<<v[i]<<" ";
    }
    return 0;
}  
