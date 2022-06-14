// Match specific pattern

#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict, string pattern);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        string tt;
        cin >> tt;

        vector<string> res = findMatchedWords(s, tt);
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
} // } Driver Code Ends

/* The function returns a  vector of strings
present in the dictionary which matches
the string pattern.
You are required to complete this method */

vector<string> findMatchedWords(vector<string> dict, string pattern)
{
    // Your code here
    map<char, int> ma;
    for (int i = 0; i < pattern.length(); i++)
        ma[pattern[i]]++;
    vector<string> v;
    for (int i = 0; i < dict.size(); i++)
    {
        string str = dict[i];
        map<char, int> ma1;
        if (pattern.length() == str.length())
        {
            for (int i = 0; i < str.length(); i++)
                ma1[str[i]]++;
        }
        auto ptr = ma1.begin();
        int flag = 0;
        for (auto it = ma.begin(); it != ma.end(); it++, ptr++)
        {
            if (ptr->second == it->second)
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            v.push_back(dict[i]);
    }
    return v;
}