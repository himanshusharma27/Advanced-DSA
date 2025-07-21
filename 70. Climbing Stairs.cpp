// Recursion 
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return 1 ;

    return climbStairs(n-1) + climbStairs(n-2);

    }
};

//Top - Down approch (Memorization)

class Solution {
public:

    int t[46];
    int solve(int n){
        if(n<=1) return 1 ;

        if(t[n] != -1) return t[n];

    return t[n] = solve(n-1) + solve(n-2);
    }

    int climbStairs(int n) {
        memset(t, -1 , sizeof(t));
        return solve(n);
    }
};


// Bottom -up approch ( Tabluration )


class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return 1 ;

        vector<int> dp(n+1);
        dp[0] = 1 ;
        dp[1] = 1 ;

        for(int i = 2 ; i<=n ;i++){
            dp[i] = dp[i-1] + dp[i-2];

        }
        return dp[n];
    }
};



