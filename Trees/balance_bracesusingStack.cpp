bool areParenthesisBalanced(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else if (!s.empty() && st.top() == '(')
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
// IS PALINDROME
bool isPalindrome(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    if (s == res)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// reverse vector
void reverseVector()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int x : arr)
    {
        st.push(x);
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    for (int x : ans)
    {
        cout << x << " ";
    }
}