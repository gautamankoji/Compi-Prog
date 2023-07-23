class Solution {
    public: 
    int fib(int n) {
        if(n == 1) return 1;
        int prev_prev = 0, prev = 1, curr = 0;
        for(int i = 2; i <= n; i++) {
            curr = prev_prev + prev;
            prev_prev = prev;
            prev = curr;
        }
        return curr;
    }
};