
// TOP - DOWN ( RECURSION + MEMORIXZATION) 

class Solution {
public:
unordered_set<string> dict;
vector<int> dp ;

bool solve(string s , int i ){
    if(i==s.length()) return true ;
    if(dp[i] != -1) return dp[i];

    for(int j = i ; j<s.length(); j++ ){
        string prefix = s.substr(i,j-i+1);
        if(dict.count(prefix) && solve(s,j+1)) 
            return dp[i] = true;
    }
    return dp[i] = false ;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        dict = unordered_set<string>(wordDict.begin() , wordDict.end());
        dp.resize(s.length() , -1);
        return solve(s,0);
    }
};



// BOTTOM - UP 

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        int n = s.length();
        vector<bool>dp(n+1 , false);
        dp[0]= true ;

        for(int i = 1 ; i<= n ; i++){
            for(int j = 0 ; j<i ; j++){
                if(dp[j] && dict.count(s.substr(j,i-j))){
                    dp[i] = true ;
                    break ;
                }
            }
        }
        return dp[n];
    }
};






