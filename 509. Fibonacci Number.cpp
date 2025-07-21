
// Use the recusion 

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n ;

        return fib(n-1) + fib(n-2);
    }
};

// use the Top - Down Approch ( Recusion + Memorization )

class Solution {
public:
int t[31];

int solve(int n){
    if(n<=1) return n;

    if(t[n] != -1) return t[n];

    return t[n] = fib(n-1) + fib(n-2);
}
    int fib(int n) {
       memset(t , -1 , sizeof(t));
       return solve(n);
    }
};


// Use the Bottom -up approch 


class Solution {
public:
    int fib(int n) {
        if(n<=1) return n ;

        vector<int> dp(n+1 , -1);
        dp[0] = 0 ;
        dp[1] = 1 ;

        for(int i = 2 ; i<=n ;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];

    }
};






