#include <iostream>
#include <unordered_map>
using namespace std;

void compressString(string s)
{
    // unordered_map<char,int>mp;
    // for(int i=0;i<s.size();i++){
    // mp[s[i]]++;
    // }
    // string res="";
    // for(auto a:mp){
    // char character=a.first;
    // int frequency=a.second;

    // res.push_back(character);
    // res.push_back(frequency+'0');
    // }

    int count = 1;
    string result = "";
    int n = s.size();
    for (int i = 0; i <= n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            if (count > 1)
            {
                result += s[i] + to_string(count);
                count = 1;
            }
            else
            {
                result += s[i];
            }
        }
    }
    cout << result;
}
void stringConversion(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else
        {
            s[i] = s[i] + 32;
        }
    }
    cout << s;
}
int main()
{

    string s;
    cout << "Enter the string" << endl;
    cin >> s;

    stringConversion(s);
    // compressString(s);
    return 0;
}