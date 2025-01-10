#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
stack<int> ms;

void push(int x)
{
    s.push(x);
    if (ms.empty() || ms.top() >= x)
    {
        ms.push(x);
    }
}

void pop()
{
    if (s.top() == ms.top())
    {
        ms.pop();
    }
    s.pop();
}

int topmost()
{
    return s.top();
}

int getMin()
{
    return ms.top();
}

int main()
{

    push(18);
    push(19);
    push(20);
    cout << topmost() << endl;
    cout << getMin() << endl;
    push(15);
    push(16);
    cout << getMin() << endl;
    pop();
    return 0;
}