class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0 ;
       int  j = n-1;

        while(i<j){
            int sum = numbers[i] + numbers[j];

            if(sum < target){
                i++;
            }else if( sum > target){
                j--;
            }
            else{
                return {i+1 , j+1};
            }
        }
        return {};
    }
};
