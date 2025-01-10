#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before bubble sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr,n);
    cout<<"Array after bubble sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}






// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };

// int main()
// {
    
//     Node *n1=new Node(5);
//     Node *n2=new Node(10);
//     Node *n3=new Node(15);
//     Node *n4=new Node(20);

//     Node *head=n1;
//     n1->next=n2;
//     n2->next=n3;
//     n3->next=n4;
//     n4->next=NULL;

//     while(head!=NULL)
//     {
//         head=head->next;
//     }
// cout<<head->data;
// }



















