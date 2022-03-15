# 1. Find triplets with zero sum

class Solution:
    #Function to find triplets with zero sum.    
    def findTriplets(self, arr, n):
       arr.sort() #sort array
       
       for idx in range(n):                     # for(int idx = 1; idx <= n; i++)
           start = idx + 1
           end = n - 1
           
           while start < end:
               sum = arr[idx] + arr[start] + arr[end]
               
               if sum == 0:
                   return True
               
               elif sum > 0:
                   end -= 1
               
               else:
                   start += 1
       
       return False 

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n=int(input())
        a=list(map(int,input().strip().split()))
        if(Solution().findTriplets(a,n)):
            print(1)
        else:
            print(0)
# } Driver Code Ends