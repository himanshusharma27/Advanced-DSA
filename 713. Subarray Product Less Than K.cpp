class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n = nums.size();
       if(k<=1) return 0 ; 

       int count = 0 ;
       int left = 0 ;
       int right = 0 ;
       int prod = 1 ;

       while(right<n){  // 0 < 4
        prod *= nums[right]; // 10 -> 10 * 5 = 50 * 2= 100

        while(prod >=k){
            prod /= nums[left]; // 100/10 -> 10 
            left++;
        }
        count += (right - left)+1;  // 1 + (1-0) + 1 = 3
        right++;
       }
       return count;
    }
};
