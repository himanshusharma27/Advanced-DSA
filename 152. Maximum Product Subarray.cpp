class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0]; // 3
        int minP = nums[0]; // 6
        int result = nums[0];n // 6

        for(int i = 1 ; i<nums.size();i++){
            int current = nums[i];

            if(current < 0 ){
                swap(maxP , minP); /// 
            }

            maxP = max(current , maxP * current); // 4 
            minP = min(current , minP * current ); // -48

            result = max(result , maxP); // 6 , 4
        }

        return result ;
    }
};
