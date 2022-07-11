// Midori and chocolates 

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int leftShops(long long int i, long long int L){
        long long res = (1 << L);           // 1 << x is same as 2 raise x
        return res - i;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int i, L;
        cin >> i >> L;
        Solution ob;
        cout << ob.leftShops(i, L) << endl;
    }
    return 0;
}
  // } Driver Code Ends