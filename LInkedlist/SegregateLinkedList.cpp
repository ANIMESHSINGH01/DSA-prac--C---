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
void printLinkedList(Node *ans)
{
    Node *p = ans;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

Node *getSegregatedLinkedList(Node *head)
{
    int target = 3;
    Node *p1 = new Node(-1);
    Node *d1 = p1;

    Node *p2 = new Node(-1);
    Node *d2 = p2;

    Node *p3 = new Node(-1);
    Node *d3 = p3;

    Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data < target)
        {
            p1->next = new Node(ptr->data);
            p1 = p1->next;
        }
        else if (ptr->data == target)
        {
            p2->next = new Node(ptr->data);
            p2 = p2->next;
        }
        else
        {
            p3->next = new Node(ptr->data);
            p3 = p3->next;
        }
        ptr = ptr->next;
    }

    p1->next = d2->next;
    p2->next = d3->next;
    return d1->next;
}

int main()
{
    Node *head = new Node(1);
    Node *two = new Node(20);
    Node *three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(3);

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Node *ans = getSegregatedLinkedList(head);
    printLinkedList(ans);

    return 0;
}