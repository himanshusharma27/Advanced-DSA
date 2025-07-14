class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans=0;
        vector<int> st;

        for(int r=0; r<n; r++){
            while(!st.empty() && height[st.back()]<height[r]){
                int m=st.back();
                st.pop_back();

                if (st.empty()){
                break;
                }

                int l=st.back();
                int h= min(height[r]-height[m], height[l]-height[m]);
                int w= r-l-1;
                
                ans+=h*w;
            }
            st.push_back(r);
        }
        return ans;
    }
};
