# 5. Add two numbers represented by linked lists

# User function Template for python3

''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''


class Solution:
    # Function to add two numbers represented by linked list.
    def addTwoLists(self, first, second):
        num1 = ""
        num2 = ""
        t1 = first
        t2 = second
        t3 = LinkedList()
        while t1:
            num1 += str(t1.data)
            t1 = t1.next
        while t2:
            num2 += str(t2.data)
            t2 = t2.next

        sumNum = int(num1)+int(num2)
        lists = list(str(sumNum))
        for x in lists:
            t3.insert(x)
        return t3.head

# {
#  Driver Code Starts
# Initial Template for Python 3

# Node Class


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Linked List Class


class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # creates a new node with given value and appends it at the end of the linked list
    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

# prints the elements of linked list starting with head


def printList(n):
    while n:
        print(n.data, end=' ')
        n = n.next
    print()


if __name__ == '__main__':
    for _ in range(int(input())):

        n = int(input())
        arr1 = (int(x) for x in input().split())
        LL1 = LinkedList()
        for i in arr1:
            LL1.insert(i)

        m = int(input())
        arr2 = (int(x) for x in input().split())
        LL2 = LinkedList()
        for i in arr2:
            LL2.insert(i)

        res = Solution().addTwoLists(LL1.head, LL2.head)
        printList(res)
# } Driver Code Ends
