#include <iostream>
using namespace std;

int getFirstOne(int arr[],int n){
int low=0;
int high=n-1;
int ans=-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==1){
ans=mid;
high=mid-1;
}
else{
low=mid+1;
}
}
return ans;
}
int main() {
int arr[7]={0,0,0,0,1,1,1};
int n=7;
int ans=getFirstOne(arr,n);
cout<<ans;

return 0;
}