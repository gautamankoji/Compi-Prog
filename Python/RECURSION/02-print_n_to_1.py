class Solution:
    # logic implementation section
    num = 1
    def printNos(self,N,i=1):
        #Your code here
        if N == 0: return
        print(N, end = " ")
        self.printNos(N-1)

if __name__ == "__main__":
    # main section
    cases = int(input())
    for t in range(cases):
        N=int(input())
        
        ob=Solution()
        
        ob.printNos(N)
        print()