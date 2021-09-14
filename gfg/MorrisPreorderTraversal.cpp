#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->right = node->left = NULL;
    return node;
}

void morrisPreorderTraversal(Node* root) {
    if(root==NULL) return;
    Node *cur, *pre; //pre is inorder predecessor
    cur=root;
    while(cur!=NULL) {
        
        if(cur->left==NULL){
            cout<<cur->data<<" ";
            cur=cur->right;
        }
        else {
            pre = cur->left;
            while(pre->right!=NULL && pre->right!=cur){
                pre = pre->right;
            }
            if(pre->right==cur){
                pre->right=NULL; //cur ka NULL
                cur=cur->right; //left ka right
            }
            else {
                
                cout<<cur->data<<" ";//pehle cout
                pre->right = cur;//NULL ka cur
                cur=cur->left;//right ka left
            }
        }
    }
}
    
//Driver Code
int main(){
    /* Constructed binary tree is
            1
          /   \
         2     3
       /   \
      4     5
  */
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    morrisPreorderTraversal(root);

    return 0;
}
