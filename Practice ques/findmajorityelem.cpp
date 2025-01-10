#include <iostream>
#include <unordered_map>
using namespace std;

// int majorityElement(int arr[],int n){
// for(int i=0;i<n;i++){
// int count=1;
// for(int j=i+1;j<n;j++){
// if(arr[i]==arr[j]){
// count++;
// }
// }
// if(count>n/2){
// return arr[i];
// }
// }
// return -1;
// }

int majorityElement(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto a : mp)
    {
        int element = a.first;
        int frequency = a.second;
        if (frequency > n / 2)
        {
            return element;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = majorityElement(arr, n);
    cout << ans;

    return 0;
}