// Linear Probing in Hashing

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
       vector<int> ans(hashSize,-1);
       int index = 0, t = 0, count = 0, rounds = 0;
       for(int i = 0; i < sizeOfArray; i++)
       {
            bool NotInserted = true;
            t=0;
            rounds=0;
            while(NotInserted && rounds!=hashSize)
            {
                rounds++;
                if(count == hashSize)
                    return ans;
                index = (arr[i] % hashSize + t) % hashSize;
                if(ans[index] == -1 || ans[index] == arr[i])
                {
                    ans[index] = arr[i];
                    if(ans[index]!=arr[i])
                        count++;
                    NotInserted = false;
                }
                t++;
            }
        }
        return ans;
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
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

  // } Driver Code Ends