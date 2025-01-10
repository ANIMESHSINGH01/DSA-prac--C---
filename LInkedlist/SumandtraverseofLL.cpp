// #include <iostream>
// using namespace std;

// class Node{
// public:
// int data;
// Node*next;

// Node(int d){
// data=d;
// next=NULL;
// }
// };
// void traverseLinkedList(Node*head){
// Node*ptr=head;
// while(ptr!=NULL){
// cout<<ptr->data<<" ";
// ptr=ptr->next;
// }
// }
// int sumOfLinkedList(Node*head){
// int sum=0;
// Node*ptr=head;
// while(ptr!=NULL){
// sum+=ptr->data;
// ptr=ptr->next;
// }
// return sum;
// }
// int main() {

// Node*head=new Node(10);
// Node*n2=new Node(20);
// Node*n3=new Node(30);
// Node*n4=new Node(40);
// head->next=n2;
// n2->next=n3;
// n3->next=n4;
// cout<<"The linked list elements are displayed here"<<endl;
// traverseLinkedList(head);
// cout<<endl;
// int sum=sumOfLinkedList(head);
// cout<<"The sum of linked list is "<<sum;
// return 0;
// }


#include<iostream>
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
void traverseLinkedList(Node*head){
    Node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main(){
    Node* head= new Node(10);
    Node* n2=new Node(20);
    Node* n3=new Node(30);
    Node* n4=new Node(40);

    head->next=n2;
    n2->next=n3;
    n3->next=n4;
    
    cout<<"The linked list elements are: "<<endl;
    traverseLinkedList(head);
}
