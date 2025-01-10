#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
int countNodes(Node *head)
{
    int count = 0;
    Node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
int MiddleOfLinkedList(Node *head)
{
    int count = countNodes(head);
    int jumps = count / 2;
    jumps--;
    Node *ptr = head;
    while (jumps > 0)
    {
        ptr = ptr->next;
        jumps--;
    }
    return ptr->data;
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    // Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next = sixth;
    cout << MiddleOfLinkedList(head);
    return 0;
}