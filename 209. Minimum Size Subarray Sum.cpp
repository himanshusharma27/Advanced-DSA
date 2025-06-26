class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0 , sum = 0 , minLen = INT_MAX;
        for(int right = 0 ; right<nums.size();right++){
            sum+= nums[right];
            while(sum>=target){ 8 >= 7 
                minLen = min(minLen , right-left+1);
                sum-=nums[left++];
            }
        }
        return minLen == INT_MAX ? 0 : minLen ;
     }
};
