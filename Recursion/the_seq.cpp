// The Sequence

#include <iostream>
using namespace std;

int theSequence(int N);

int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    cout<<theSequence(N)<<endl;
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int theSequence(int N)
{
    if (N == 0)
        return 1;
        
    else
        return N + N *(theSequence(N-1));
    
}