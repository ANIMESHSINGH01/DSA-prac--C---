#include <iostream>
#include <stack>
using namespace std;
int n = 3;
stack<int> s;

void push(int value)
{
    if (n <= 0)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        s.push(value);
        n--;
    }
}
void pop()
{
    if (n <= 0)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        s.pop();
        n++;
    }
}
int size()
{
    return s.size();
}
int top(int n)
{
    if (n <= 0)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        return s.top();
    }
}
void display()
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{

    // cout<<"Enter the size of the stack"<<endl;
    // cin>>n;

    push(20);
    push(30);
    pop();

    push(30);
    pop();
    display();
    return 0;
}