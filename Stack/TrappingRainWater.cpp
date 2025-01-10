// Bruteforce approach
#include <bits/stdc++.h>
using namespace std;

// int getMaximumOnTheRight(int element, int index, int arr[], int n)
// {
//     int maxi = element;
//     for (int t = index; t < n; t++)
//     {
//         if (arr[t] > maxi)
//         {
//             maxi = arr[t];
//         }
//     }
//     return maxi;
// }
// int getMaximumOnTheLeft(int element, int index, int arr[], int n)
// {
//     int maxi = element;
//     for (int t = index; t >= 0; t--)
//     {
//         if (arr[t] > maxi)
//         {
//             maxi = arr[t];
//         }
//     }
//     return maxi;
// }
// int trappingRainwater(int arr[], int n)
// {
//     int water = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int maxi = getMaximumOnTheRight(arr[i], i + 1, arr, n);
//         int mini = getMaximumOnTheLeft(arr[i], i - 1, arr, n);
//         int minimum = min(maxi, mini);
//         water += abs(arr[i] - minimum);
//     }
//     return water;
// }
// int main()
// {
//     int arr[6] = {2, 5, 3, 7, 1, 4};
//     int n = 6;
//     int ans = trappingRainwater(arr, n);
//     cout << ans;
// }

// Effective approach

int trappingRainwater(int arr[],int n){
int water=0;
int maxL[n];
int maxR[n];

//max to the left
maxL[0]=arr[0];
for(int i=1;i<n;i++){
if(arr[i]>maxL[i-1]){
maxL[i]=arr[i];
}
else{
maxL[i]=maxL[i-1];
}
}

//max to the right
maxR[n-1]=arr[n-1];
for(int i=n-2;i>=0;i--){
if(arr[i]>maxR[i+1]){
maxR[i]=arr[i];
}
else{
maxR[i]=maxR[i+1];
}
}

for(int i=0;i<n;i++){
int maxiLeft=maxL[i];
int maxiRight=maxR[i];
int minimum=min(maxiLeft,maxiRight);
water+=abs(arr[i]-minimum);
}
return water;
}
int main()
{
int arr[6]={2,5,3,7,1,4};
int n=6;
int ans=trappingRainwater(arr,n);
cout<<ans;
}