class Solution:
	def isPalindrome(self, S):
		return 1 if S == S[::-1] else 0

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		S = input()
		ob = Solution()
		answer = ob.isPalindrome(S)
		print(answer)
