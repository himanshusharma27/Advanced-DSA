class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left = 0 ;
        int right = people.size()-1;
        int boats = 0 ;

        while(left<=right){
            if(left==right){
                boats += 1 ;
                break;
            }

            if(people[left] +people[right] <= limit){
                boats += 1 ;
                right-=1;
                left+=1;
            }
            else{
                boats+=1;
                right-=1;
            }
        }
        return boats ;

    }
};
