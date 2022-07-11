// { Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

 // } Driver Code Ends
//User function Template for C++



void counting_sort(int arr[],int n,int exp)
  {
      int count[10],output[n];
      for(int i=0; i<10;i++)
      {
          count[i]=0;
      }
      for(int i=0;i<n;i++)
      {
          count[(arr[i]/exp)%10]++;
      }
      for(int i=1;i<10;i++)
      {
          count[i]=count[i-1]+count[i];
      }
      for(int i=n-1;i>=0;i--)
      {
          output[count[(arr[i]/exp)%10]-1] = arr[i];
          count[(arr[i]/exp)%10]--;
      }
      for(int i=0;i<n;i++)
      {
          arr[i]=output[i];
      }
  }
  
void radixSort(int arr[], int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
  
    for (int exp = 1; mx / exp > 0; exp *= 10) 
        counting_sort(arr, n, exp); 
} 
 

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
}   // } Driver Code Ends