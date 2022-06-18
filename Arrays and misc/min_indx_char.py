# Minimum indexed character

class Solution:
    def printMinIndexChar(self, S, patt):
        for i in range(len(S)):
            if S[i] in patt:
                return S[i]

        return "$"

# {
#  Driver Code Starts


if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        S = input().strip()
        patt = input().strip()
        obj = Solution()
        print(obj.printMinIndexChar(S, patt))
# } Driver Code Ends


