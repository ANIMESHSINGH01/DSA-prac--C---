#include<iostream>
using namespace std;
int count=0;
// void print(){
//     if(count==3){
//         return;
//     }

   
//     cout<<count<<endl;
//     count++;
//     print();
    
       
    
// }
// int main(){
//     int count;
//     cout<<"Enter the value of count"<<endl;
//     cin>>count;

//     print();
// return 0;
// }
void print(){
    if(count==0){
        return;
    }
    cout<<count<<endl;
    count++;
    print();
}
int main(){
    int count;
    cout<<"Enter the value of count"<<endl;
    cin>>count;
    print();
    return 0;
}