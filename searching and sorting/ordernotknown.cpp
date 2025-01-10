#include <iostream>
using namespace std;

int binarySearchInc(int arr[],int target,int n){
int low=0;
int high=n-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==target){
return mid;
}
else{
if(arr[mid]>target){
high=mid-1;
}
else{
low=mid+1;
}
}
}
return -1;
}
int binarySearchDec(int arr[],int target,int n){
int low=0;
int high=n-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==target){
return mid;
}
else{
if(arr[mid]>target){
low=mid+1;
}
else{
high=mid-1;
}
}
}
return -1;
}
int main() {
int arr[6]={3,4,5,6,7,8};
int target=8;
int n=6;
int ans;
if(arr[0]<arr[1]){
ans=binarySearchInc(arr,target,n);
}
else{
ans=binarySearchDec(arr,target,n);
}
cout<<ans;
return 0;
}