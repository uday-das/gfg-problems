// Quadratic Probing in Hashing 

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Quadratic Probing to handle collisions.
    void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int N)
    {
        fill(hash.begin(), hash.end(), -1);
        for(int i = 0 ; i < N ; i++)
        {
            int hv = arr[i] % hashSize;
            if(hash[hv] == -1)
                hash[hv] = arr[i];
            else
            {
                for(int j = 0 ; j < hashSize ; j++)
                {
                    int t = (hv + j * j) % hashSize;
                    if(hash[t] == -1)
                    {
                        hash[t] = arr[i];
                        break;
                    }
                }
            }
        }
    }

};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int  N;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    vector<int> hash (hashSize);
	    Solution obj;
	    obj.QuadraticProbing (hash, hashSize, arr, N);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}


  // } Driver Code Ends