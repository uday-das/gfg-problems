// 3a. Vector Sum (Method I)

// { Driver Code Starts
//Initial Template for C++

// Find sum of the vector
#include <bits/stdc++.h>

using namespace std; 

// } Driver Code Ends
//User function Template for C++

//Complete the function
int SumMe(vector<int> arr, int n){
    int sum = 0;
    for(auto i : arr)
    {
        sum += i;
    }
    return sum;
}

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;

    while(t--){

    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n;++i){
        cin>>arr[i];
    }

    cout<<SumMe(arr, n)<<endl;

    }

	return 0; 
} 
  // } Driver Code Ends

// 3b. Vector Sum (Method II)

// int SumMe(vector<int> arr, int n){
//     int sum = 0;
//     vector <int> :: iterator i; 
//     for(i = arr.begin(); i != arr.end(); i++)
//     {
//         sum += *(i);
//     }
//     return sum;
// }
