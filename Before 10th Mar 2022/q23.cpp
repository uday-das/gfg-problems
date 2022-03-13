// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *a, int n, int k) {
	    int i, j;
	    for(i = 0, j = n-1; i < k-1 && j > k-1 ; i++, j--)
	    { }
	    int temp = a[i];
	    a[i] = a[j];
	    a[j] = temp;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.swapKth(arr, n, k);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
