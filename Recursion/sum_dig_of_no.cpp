// Sum of Digits of a Number

//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int sumOfDigits(int n)
{
    if(n == 0)
        return 0;
    else
    {
        return n % 10 + sumOfDigits(n/10);
    }
}

// { Driver Code Starts.

int main() {
	int T;
	
	//taking testcases
	scanf("%d", &T);
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    scanf("%d", &n);
	    
	    //calling method sumOfDigits()
	    
	    printf("%d\n", sumOfDigits(n));
	    
	    
	}
	return 0;
}  // } Driver Code Ends