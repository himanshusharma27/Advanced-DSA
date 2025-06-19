class Solution {
public:
    
    int fact(int n) {
        int res = 1;
        for(int i = 1; i <= n; i++) res *= i;
        return res;
    }

    string getPermutation(int n, int k) {
        string nums = "";        
        for(int i = 1; i <= n; i++)
            nums += (i + '0');

        string ans = "";
        k--; 

        for(int i = 0; i < n; i++) {
            int f = fact(n - i - 1);      
            int index = k / f;            
            ans += nums[index];           
            nums.erase(index, 1);   
            k %= f;                       
        }

        return ans;
    }
};
