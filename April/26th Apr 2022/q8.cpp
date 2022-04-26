// 8. Unordered Set Hash Function

// { Driver Code Starts
//Initial Template for C++

// unordered_set::hash_function
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete the function
long int HashMe (unordered_set<string> myset, string str){
    
// hasher is in-buit whereas foo is user-defined
  unordered_set<string>::hasher foo = myset.hash_function();

  // Generating hash value
  return foo (str);
}


// { Driver Code Starts.

int main ()
{

  int t;
  cin>>t;
  
  while(t--){

  string str;
  cin>>str;

  unordered_set<string> myset;

  cout << HashMe(myset, str) << endl;

}
 
  return 0;
}
  // } Driver Code Ends