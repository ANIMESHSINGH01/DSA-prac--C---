#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int arr[5]={2,3,45,6,7};
int n=5;
int ans=accumulate(arr,arr+n,0);
cout<<ans;
sort(arr,arr+n);//increasing sort
sort(arr,arr+n,greater<int>())//decreasing sort
reverse(arr+2,arr+n);
int min=*min_element(arr,arr+n);
int max=*max_element(arr,arr+n);
cout<<"Minimum ele is "<<min<<" "<<"maximum ele is "<<max<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
string s="madam";
string ss=s;
reverse(s.begin(),s.end());
if(s==ss){
cout<<"palindrome";
}
else{
cout<<"not a palindrome";
}
string s="abcdef";
int i=0;
int j=s.size()-1;
while(i<=j){
swap(s[i],s[j]);
i++;
j--;
}
cout<<s;
return 0;
}