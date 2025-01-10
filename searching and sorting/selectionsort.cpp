#include <iostream>
using namespace std;

int maxElementIndex(int low, int high, int arr[])
{
    int maxElement = -1e9;
    int maxIndex = -1;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int maxInd = maxElementIndex(0, n - i - 1, arr);
        swap(arr[maxInd], arr[n - i - 1]);
    }
}
int main()
{

    int arr[5] = {3, 7, 2, 5, 9};
    int n = 5;
    cout << "Array before selection sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    selectionSort(arr, n);
    cout << endl;
    cout << "Array after selection sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}