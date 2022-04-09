// 1. Parenthesis Checker

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string str)
    {
        stack <char> s;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[')
                s.push(str[i]);
            else
            {
                if(s.empty())                         // case: [(])
                    return false;
                else if(check(s.top(), str[i]) == false)
                    return false;
                else
                    s.pop();                          // case: [{()}]
            }
        }
        return (s.empty() == true);                   // if all brackets not closed (extra): case: ((())                                
        
    }
    bool check(char a, char b)
    {
        return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends