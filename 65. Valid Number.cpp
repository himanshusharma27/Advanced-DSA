class Solution {
public:
    bool isNumber(string s) {
        bool numSeen = false, dotSeen = false, eSeen = false;

        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                numSeen = true;
            } 
            else if (s[i] == '+' || s[i] == '-') {
                if (i > 0 && (s[i - 1] != 'e' && s[i - 1] != 'E'))
                    return false;
            } 
            else if (s[i] == '.') {
                if (dotSeen || eSeen) return false;
                dotSeen = true;
            } 
            else if (s[i] == 'e' || s[i] == 'E') {
                if (eSeen || !numSeen) return false;
                eSeen = true;
                numSeen = false;  // Need a number after 'e'
            } 
            else return false;
        }

        return numSeen;
    }
};
