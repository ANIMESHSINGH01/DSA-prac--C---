#include <iostream>
#include <vector>
using namespace std;

bool flag = false;
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

void inorderTraversal(Node *root, int target)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // calls recursive
    inorderTraversal(root->left, target);
    // ds.push_back(root->data);
    if (root->data == target)
    {
        flag = true;
    }
    inorderTraversal(root->right, target);
}
int main()
{

    Node *root = new Node(21);
    Node *second = new Node(32);
    Node *third = new Node(40);
    Node *fourth = new Node(50);
    Node *fifth = new Node(90);

    int target;
    cout << "Enter the target that you want to search" << endl;
    cin >> target;

    root->left = second;
    root->right = third;
    third->left = fourth;
    third->right = fifth;

    // vector<int>ds;
    inorderTraversal(root, target);
    // bool flag=false;
    // for(int x:ds){
    // if(x==target){
    // flag=true;
    // }
    // }
    if (flag == true)
    {
        cout << "Target found";
    }
    else
    {
        cout << "target not found";
    }
    return 0;
}