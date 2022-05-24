// Combinational Logic

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int logicalOperation(int A,int B,int C,int D,int E,int F){
        return ~A & B | C & D | E & ~F;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C, D, E, F;
        cin >> A >> B >> C >> D >> E >> F;
        Solution ob;
        cout << ob.logicalOperation(A, B, C, D, E, F) << endl;
    }
    return 0;
}
  // } Driver Code Ends