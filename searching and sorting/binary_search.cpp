#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {3, 5, 6, 7, 9, 10};
    int n = 6;
    int target = 9;
    int ans = binarySearch(arr, n, target);
    cout << ans;
    return 0;
}