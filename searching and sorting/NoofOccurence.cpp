#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n,int target){
int low=0;
int high=n-1;
int ans=-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==target){
ans=mid;
high=mid-1;
}
else{
if(arr[mid]<target){
low=mid+1;
}
else{
high=mid-1;
}
}
}
return ans;
}
int lastOccurence(int arr[],int n,int target){
int low=0;
int high=n-1;
int ans=-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==target){
ans=mid;
low=mid+1;
}
else{
if(arr[mid]<target){
low=mid+1;
}
else{
high=mid-1;
}
}
}
return ans;
}
int main() {
int arr[7]={1,2,3,3,3,5,9};
int n=7;
int target=3;
int fo=firstOccurence(arr,n,target);
int lo=lastOccurence(arr,n,target);
cout<<((lo-fo)+1);
return 0;
}