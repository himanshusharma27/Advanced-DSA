class Solution {
public:

vector<int>getLeftMax(vector<int> &height , int &n){
    vector<int>leftmax(n);  // left 
    leftmax[0] = height[0];  // 4
    for(int i = 1 ; i<n;i++){
        leftmax[i] = max(leftmax[i-1] , height[i]);  // max(4,2)
    }
    return leftmax;
}

vector<int>getRightMax(vector<int> &height  , int &n){
        vector<int>rightmax(n);
        rightmax[n-1] = height[n-1];
        for(int i = n-2 ; i>=0 ; i--){
            rightmax[i] = max(rightmax[i+1] , height[i]); 
        }
        return rightmax;
}

    int trap(vector<int>& height) {
       int n = height.size();
       int sum = 0 ;
       vector<int>leftMax = getLeftMax(height,n);
       vector<int>rightMax = getRightMax(height,n);

       for(int i = 0 ; i<n;i++){
        int h = min(leftMax[i] , rightMax[i]) - height[i];
        sum+= h;

       }
       return sum ;

    }
};
