// Run Length Encoding

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
} // } Driver Code Ends

/*You are required to complete this function */

string encode(string src)
{
    string s = "";
    int x = src.length();
    {
        for (int i = 0; i < x; i++)
        {
            s.push_back(src[i]);
            int count = 1;
            while (i < x - 1 && src[i] == src[i + 1])
            {
                count++;
                i++;
            }
            char c = count + '0';
            s.push_back(c);
        }
    }
    return s;
}
