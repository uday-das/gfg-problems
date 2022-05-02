// 1. Maximum Occuring Character

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map <char, int> mp;
        int max_freq = INT_MIN; 
        string a = "";
        for(int i = 0; i < str.length(); i++)
        {
            mp[str[i]]++;
        }
        map <char, int> :: iterator i;
        for(i = mp.begin(); i != mp.end(); i++)
        {
            if(((*i).second) > max_freq)
            {
                max_freq = ((*i).second);
            }
        }
        
        int j = 0;
        for(i = mp.begin(); i != mp.end(); i++)
        {
            if(((*i).second) == max_freq)
            {
                a[j++] = ((*i).first);
            }
        }
        sort(a.begin(), a.end());
        return a[0];
    }
};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends
