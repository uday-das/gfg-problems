// 3. Forward List Erase After

// { Driver Code Starts
//Initial Template for C++

// Erasing from forward_list
#include <iostream>
#include <forward_list>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete the function
forward_list<int> EraseMe (forward_list<int> fwdlist){

    auto it = fwdlist.begin();
    fwdlist.erase_after(it);
    return fwdlist;
}


// { Driver Code Starts.

int main ()
{

int t;
cin>>t;
  
while(t--){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
      int x;
        cin>>x;
        arr[i]=x;
  }

    forward_list<int> fwdlist;

    auto it = fwdlist.before_begin();

    for(int i=0; i<n; ++i){
        it = fwdlist.insert_after(it, arr[i]);
    }

  forward_list<int> res = EraseMe(fwdlist);

  for (int &x: res) cout << x << ' ';
  cout <<endl;

}

  return 0;
}
  // } Driver Code Ends