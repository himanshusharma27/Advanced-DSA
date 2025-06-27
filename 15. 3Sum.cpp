class Solution {
public:

vector<vector<int>>result ;

void twoSum(vector<int>&nums, int target , int i , int j){
    while(i<j){
        if(nums[i] + nums[j] > target) j--;
        else if(nums[i] + nums[j] < target) i++;
        else{

            // duplicate
            while(i<j && nums[i] == nums[i+1]) i++; // i duplcate 
            while(i<j && nums[j] == nums[j-1]) j--;  // j duplicatre 

            result.push_back({-target , nums[i] , nums[j]});
            i++;
            j--;
        }
    }
}

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<3){
            return {};   // base 
        }
        result.clear();

        sort(nums.begin(),nums.end());

        for(int i = 0 ; i<n-2;i++){
            if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int n1 = nums[i];  /// approch 
        int target = -n1; // 

        twoSum(nums , target , i+1 , n-1);
    }
    return result;
    }
};
