#include <iostream>
// #include<set>
#include <unordered_map>
using namespace std;

// Using two for loops
//  bool isPangram(int arr[],int n){
//  for(int i=0;i<n;i++){
//  for(int j=i+1;j<n;j++){
//  if(arr[i]==arr[j]){
//  return false;
//  }
//  }
//  }
//  return true;
//  }

// using set/hashset
//  bool isPangram(int arr[],int n){
//  set<int>s;
//  for(int i=0;i<n;i++){
//  if(s.find(arr[i])!=s.end()){
//  return false;
//  }
//  else{
//  s.insert(arr[i]);
//  }
//  }
//  return true;
//  }

// calculate frequencies of array elements
void printFrequencies(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << ":" << it.second << endl;
    }
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
    printFrequencies(arr, n);
    // bool ans=isPangram(arr,n);
    // cout<<ans;
    return 0;
}