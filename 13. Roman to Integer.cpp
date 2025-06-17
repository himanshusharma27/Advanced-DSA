class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int num = 0;

        for(i = i-1 ; i>=0;i--){
            if(x>0){
                if(s[i-1]=='I' && s[i] =='V'){
                    num+= 4;
                    i--; 
                    continue;
                }
                else if(s[i-1] == 'I' && s[i] =='X'){
                    num+= 9;
                    i--;
                    continue;
                } 
                else if(s[i-1] == 'X' && s[i] =='L'){
                    num+= 40;
                    i--;
                    continue;
                } 
                else if(s[i-1] == 'X' && s[i] =='C'){
                    num+= 90;
                    i--;
                    continue;
                }
                else if(s[i-1] == 'C' && s[i] =='D'){
                    num+= 500;
                    i--;
                    continue;
                }
                else if(s[i-1] == 'C' && s[i] =='M'){
                    num+= 900;
                    i--;
                    continue;
                }   
            }
            if(s[i] == 'I'){
                num+=1;
            }
            else if(s[i]=='V'){
                num+=5;
            }
            else if(s[i]=='X'){
                num+=10;
            }
            else if(s[i] == 'L'){
                num+=50;
            }
             else if(s[i] == 'C'){
                num+=100;
            }
             else if(s[i] == 'D'){
                num+=500;
            }
             else if(s[i] == 'M'){
                num+=1000;
            }

        }
        return num ;
    }
};
