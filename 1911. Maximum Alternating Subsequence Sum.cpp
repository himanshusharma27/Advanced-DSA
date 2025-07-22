
// TOP - DOWN APPROCH (MEMORIZATION)


class Solution {
public:
    int n;
    long long t[1000001][2];
    long long solve(int idx, vector<int>& nums, bool iseven) {
        
        if(idx >= n) {
            return 0;
        }
        if(t[idx][iseven] != -1)
            return t[idx][iseven];
        
        long long skip = solve(idx+1, nums, iseven);
        
        long long val = nums[idx];
        if(iseven == false) {
            val = -val;
        }
        
        long long take = solve(idx+1, nums, !iseven) + val;
        
        return t[idx][iseven] = max(skip, take);
        
    }
    
    long long maxAlternatingSum(vector<int>& nums) {
        n = nums.size();
        memset(t, -1, sizeof(t));
        return solve(0, nums, true);
    }
};



//BOTTOM-UP Approch (tabulrization)



class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<long>> t(n, vector<long>(2, 0));

        t[0][0] = max(-nums[0], 0);
        t[0][1] = max(nums[0], 0);
            
        for(int i = 1; i < n; i++) {
            
            t[i][0] = max(t[i-1][1] - nums[i], t[i-1][0]);
            
            t[i][1] = max(t[i-1][0] + nums[i], t[i-1][1]);
            
            
        }
        
        return max(t[n-1][0], t[n-1][1]);
    }
};
