/// recursuion only 

class Solution {
public:

int robbing(vector<int> &nums, int i , int n){

    if(i>n) return 0 ;
    int take = nums[i] + robbing(nums, i+2 , n);
    int skip = robbing(nums , i + 1 , n);

    return max(take , skip);
}

    int rob(vector<int>& nums) {
          int n = nums.size();
          if(n==1) return nums[0];

          int case1 = robbing(nums,0,n-2);
          int case2 = robbing(nums,1,n-1);

          return max(case1,case2);
    } 
};



// TOP-DOWN (MEMORIZATION)

class Solution {
public:

int dp[101];

int solve(vector<int> &nums , int i , int n){
    if(i>n) return 0 ;
    if(dp[i] != -1) return dp[i];

    int take = nums[i] + solve(nums , i + 2 , n);
    int skip = solve(nums,i+1,n);


    return dp[i] = max(take , skip);
}
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];

        memset(dp , -1, sizeof(dp));
        int case1 = solve(nums , 0 , n-2);
        
        memset(dp , -1 , sizeof(dp));
        int case2 = solve(nums,1 , n-1);

        return max(case1 , case2);
    }
};

//BOTTOM -UP ( TABLURATIN)


class Solution {
public:

int solve(vector<int> &nums , int start , int end){
    int n = end-start+1;
    if(n==0) return 0 ;
    if(n==1) return nums[start];

    vector<int> dp(n,0);
    dp[0] = nums[start];
    dp[1] = max(nums[start],nums[start+1]);

    for(int i = 2 ; i<n ;i++){
        dp[i] = max(dp[i-1] , dp[i-2] + nums[start+i]);
    }
    return dp[n-1];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];

        int case1 = solve(nums , 0 , n-2);
        int case2 = solve(nums, 1 , n-1);

        return max(case1,case2);
    }
};


