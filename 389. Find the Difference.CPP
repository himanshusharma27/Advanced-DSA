class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_s = 0 ;
        for(char ch : s){
            sum_s += ch;
        }
         int sum_t = 0 ;
        for(char ch : t){
            sum_t += ch;
        }
        return sum_t - sum_s;
    }
};
