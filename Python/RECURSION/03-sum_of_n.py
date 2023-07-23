class Solution:
    def sumOfSeries(self, N):
        return (N * (N+1)// 2)**2
        

if __name__ == '__main__':
    cases = int(input())
    for _ in range(cases):
        N = int(input())
        ob = Solution()
        print(ob.sumOfSeries(N))
