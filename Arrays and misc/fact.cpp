// Factorial Of Number 

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
long long factorial(int);

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        long long fact = 1;
        for(int i = 2; i <= N; i++)
        {
            fact = fact * i;
        }
        return fact;
    }

};

// { Driver Code Starts.
int main() {
    int T, N;
    cin >> T; // input number of testcases
    while (T--) {
        cin >> N; // input n
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}
  // } Driver Code Ends