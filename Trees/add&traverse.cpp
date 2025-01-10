#include <iostream>
#include <vector>
using namespace std;

vector<int> odd;
vector<int> even;
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

void countNodes(Node *root, int &countEven, int &countOdd)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // calls recursive
    countNodes(root->left, countEven, countOdd);
    countNodes(root->right, countEven, countOdd);
    if (root->data % 2 == 0)
    {
        countEven++;
        even.push_back(root->data);
    }
    else
    {
        countOdd++;
        odd.push_back(root->data);
    }
}
int main()
{

    Node *root = new Node(1);
    Node *second = new Node(20);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    root->left = second;
    root->right = fifth;
    second->left = third;
    second->right = fourth;

    int countEven, countOdd = 0;
    countNodes(root, countEven, countOdd);
    cout << "odd nos. are " << countOdd << " and even nos. are " << countEven;
    cout << endl;
    cout << "Odd nos. are" << endl;
    for (int x : odd)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Even nos. are" << endl;
    for (int x : even)
    {
        cout << x << " ";
    }
    return 0;
}