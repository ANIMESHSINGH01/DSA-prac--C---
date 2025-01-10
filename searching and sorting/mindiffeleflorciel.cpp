int floorValue(int arr[],int n, int target){
int low=0;
int high=n-1;
int floorVal=INT16_MIN;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==target){
return arr[mid];
}
else{
if(arr[mid]<target){
floorVal=arr[mid];
low=mid+1;
}
else{
high=mid-1;
}
}
}
return floorVal;
}
int ceilValue(int arr[],int n,int target){
int low=0;
int high=n-1;
int ceilval=INT16_MAX;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==target){
return arr[mid];
}
else{
if(arr[mid]<target){
low=mid+1;
}
else{
ceilval=arr[mid];
high=mid-1;
}
}
}
return ceilval;
}
int minDiff(int arr[],int n, int target){
int floorVal = floorValue(arr, n, target);
int ceilVal = ceilValue(arr, n, target);
if(target-floorVal<=ceilVal-target){
return floorVal;
}
else{
return ceilVal;
}
}
int main(){
    int ans=minDiff(arr,n,target);
    int arr[7]={1,3,5,7,9,11,13};
    int n=7;
    int target=6;
    
    cout<<ans<<endl;
 return 0;

}
   
}