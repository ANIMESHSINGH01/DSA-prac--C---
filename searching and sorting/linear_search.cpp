#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int target){
for(int i=0;i<n;i++){
if(arr[i]==target){
return i;
}
}
return -1;
}
int main() {
int arr[6]={5,3,2,7,9,10};
int n=6;
int target=9;
int ans=linearSearch(arr,n,target);
cout<<ans;
return 0;
}