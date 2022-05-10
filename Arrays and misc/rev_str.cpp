// Reverse a String

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++

string reverseWord(string str)
{
    for (int i = 0, j = str.length()-1; i < j; i++, j--)
    {
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}