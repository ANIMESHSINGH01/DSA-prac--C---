#include <bits/stdc++.h>
using namespace std;

int top = -1;
int n = 5;
int arr[5];
void push(int x)
{
    if (top == n)
    {
        cout << "stack overflow";
    }
    else
    {
        top++;
        arr[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "stack underflow";
    }
    else
    {
        top--;
    }
}
int topmost()
{
    return arr[top];
}
int size()
{
    return top + 1;
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    cout << topmost() << endl;
    cout << size() << endl;
    pop();
    cout << topmost() << endl;
    cout << size() << endl;
    return 0;
}