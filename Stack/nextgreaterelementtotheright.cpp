#include <bits/stdc++.h>
using namespace std;

void NextGreaterElementToTheRight(int a[], int n, int ans[])
{
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            ans[i] = -1;
            s.push(a[i]);
        }
        else if (!s.empty() && s.top() > a[i])
        {
            ans[i] = s.top();
            s.push(a[i]);
        }
        else if (!s.empty() && s.top() <= a[i])
        {
            while (!s.empty() && s.top() <= a[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans[i] = -1;
                s.push(a[i]);
            }
            else if (!s.empty() && s.top() > a[i])
            {
                ans[i] = s.top();
                s.push(a[i]);
            }
        }
    }
}
int main()
{
    int a[7] = {7, 3, 5, 1, 9, 2, 4};
    int n = 7;
    int ans[7];
    NextGreaterElementToTheRight(a, n, ans);
    for (int i = 0; i < n; i++)
    {
        cout << "The next greater element to the right of " << a[i] << " is " << ans[i] << endl;
    }
    return 0;
}