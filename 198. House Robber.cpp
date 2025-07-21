
// Recursion 

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0 ;
        if(n == 1) return nums[0];

        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0] , nums[1]);

        for(int i = 2 ; i<n ; i++){
            dp[i] = max(dp[i-1] , nums[i] + dp[i-2]);

        }
        return dp[n-1];
    }
};


// Top  - Down Approch 


class Solution {
public:
    
        int dp[101];

        int solve(vector<int> &nums, int i){
            if(i>=nums.size()) return 0 ;

            if(dp[i] != -1) return dp[i];

            int rob = nums[i] + solve(nums,i+2);
            int skip = solve(nums , i+1);

            return dp[i] = max(rob , skip);
        }

        int rob(vector<int>& nums) {

            memset(dp , -1 , sizeof(dp));
            return solve(nums,0);
    }
};

// Bottom - up approch 

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0 ;
        if(n == 1) return nums[0];

        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0] , nums[1]);

        for(int i = 2 ; i<n ; i++){
            dp[i] = max(dp[i-1] , nums[i] + dp[i-2]);

        }
        return dp[n-1];
    }
};
