#include <iostream>
using namespace std;

class Node{
public:
int data;
Node*next;
Node(int d){
data=d;
next=NULL;
}
};

int MiddleOfLinkedList(Node*head){
Node*slow=head;
Node*fast=head;
while(fast->next!=NULL&&fast->next->next!=NULL){
slow=slow->next;
fast=fast->next->next;
}
return slow->data;

}
int main() {
Node*head=new Node(10);
Node*second=new Node(20);
Node*third=new Node(30);
Node*fourth=new Node(40);
Node*fifth=new Node(50);
Node*sixth=new Node(60);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
cout<<MiddleOfLinkedList(head);
return 0;
}