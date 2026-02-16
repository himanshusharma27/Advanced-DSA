class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
         
         if(nums1.length > nums2.length ) {
            return findMedianSortedArrays(nums2, nums1);
         }

         int s1 = nums1.length ;
         int s2 = nums2.length ;

         int left = 0 ; 
         int right = s1 ;

         while(left<=right){
            int p1 = (left + right)/2 ;
            int p2 = (s1 + s2+1)/2 -p1;

            int leftVal1 = (p1 == 0) ?Integer.MIN_VALUE : nums1[p1-1];
            int rightVal1 = (p1==s1) ? Integer.MAX_VALUE: nums1[p1];

            int leftVal2 = (p2==0)?Integer.MIN_VALUE :nums2[p2-1];
            int rightVal2 = (p2== s2) ? Integer.MAX_VALUE :nums2[p2];
 

            if(leftVal1 <= rightVal2  && leftVal2 <= rightVal1){
                if((s1+s2) % 2== 0){
                    return (Math.max(leftVal1 , leftVal2) + Math.min(rightVal1 , rightVal2))/ 2.0;
                }else{
                    return Math.max(leftVal1 , leftVal2);
                }
            }
            else if(leftVal1 > rightVal2){
                right = p1 -1 ;
            }else{
                left = p1 + 1 ;
            }
         }
         return 0.0 ;
    }
}
