class Solution:
    # logic implementation section
    def factorialNumbers(self, N):
        v = []
        fact = 1
        def Factorial(N, i):
            nonlocal fact
            fact *= i
            if fact > N:
                return
            v.append(fact)
            Factorial(N, i+1)
            
        Factorial(N, 1)
        return v

if __name__ == "__main__":
    # main section
    cases = int(input())
    for t in range(cases):
        N=int(input())
        
        ob=Solution()
        ans = ob.factorialNumbers(N)
        for i in ans:
            print(i, end = " ")
        print()