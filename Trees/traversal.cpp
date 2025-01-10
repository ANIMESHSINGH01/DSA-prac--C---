#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
// void preorderTraversal(Node*root){
// //base case
// if(root==NULL){
// return;
// }

// //calls recursive
// cout<<root->data<<" ";
// preorderTraversal(root->left);
// preorderTraversal(root->right);
// }
// void inorderTraversal(Node*root){
// //base case
// if(root==NULL){
// return;
// }

// //calls recursive
// inorderTraversal(root->left);
// cout<<root->data<<" ";
// inorderTraversal(root->right);
// }
void postorderTraversal(Node *root)
{
    // base case

    if (root == NULL)
    {
        return;
    }

    // calls recursive
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
int main()
{

    Node *root = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(5);

    root->left = two;
    root->right = three;
    two->left = four;
    two->right = five;

    // preorderTraversal(root);
    // inorderTraversal(root);
    postorderTraversal(root);
    return 0;
}