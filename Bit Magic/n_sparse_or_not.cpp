// Number is sparse or not

// { Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        int res = 0;
        while(n > 0)
        {
            if(n % 2 != 0)              // if consecutive then check res >= 2 or not           
            {
                res++;
                if(res >= 2)
                    return false;
            }
            else                        // if not consecutive reset res to 0
            {
                res = 0;
            }
            n = n >> 1;
        }
        return true;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends