// 2. Extract the integers

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    vector<string> str;
    string st = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            st += s[i];
            if(!(s[i+1] >= '0' && s[i+1] <= '9'))                   // other characters
                st += " ";
        }
    }
    
    if(!st.length())
    {
        st = "No Integers";
    }
    str.push_back(st);
    return str;
}