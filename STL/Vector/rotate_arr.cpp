// Rotating an Array 

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        queue <int> q;
        for(int i = 0; i < n; i++)
            q.push(arr[i]);
            
        int el;
        for(int i = 1; i <= d; i++)
        {
            el = q.front();
            q.pop();
            q.push(el);
        }
        for(int i = 0; i < n; i++)
        {
            el = q.front();
            q.pop();
            arr[i] = el;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


  // } Driver Code Ends