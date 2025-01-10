#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
for(int i=1;i<n;i++){
for(int j=i;j>=0;j--){
if(arr[j]<arr[j-1]){
swap(arr[j],arr[j-1]);
}
else{
break;
}
}
}
}
int main() {

int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"Array before insertion sort"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
insertionSort(arr,n);
cout<<endl;
cout<<"Array after insertion sort"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}