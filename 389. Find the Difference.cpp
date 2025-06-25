class Solution {
public:
    char findTheDifference(string s, string t) {
      unordered_map<char,int> m;
      for(int i = 0 ; i<s.size();i++){
        m[s[i]]++;-
      }  
      for(int j = 0 ; j<t.size();j++){ 
        m[t[j]]--;
      } 
      for(auto p:m){
        if(p.second <0){
            return p.first;
        }
      } 
      return {};
    }
};
