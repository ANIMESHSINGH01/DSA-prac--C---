#include <bits/stdc++.h>
using namespace std;
int count = 1;
string result = "";
int n = input.size();
for (int i = 0; i <= n - 1; i++)
{
    if (input[i] == input[i + 1])
    {
        count++;
    }
    else
    {
        if (count > 1)
        {
            result += input[i] + to_string(count);
            count = 1;
        }
        else
        {
            result += input[i];
        }
    }
}
return result;

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}