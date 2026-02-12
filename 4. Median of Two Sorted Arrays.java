class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        List<Integer>merged  = new ArrayList<>();

        int i = 0 , j = 0 ;

        while(i<nums1.length && j < nums2.length){
            if(nums1[i] < nums2[j]){
                merged.add(nums1[i++]);
            }
            else{
                merged.add(nums2[j++]);
            }
        }

        while(i<nums1.length){
            merged.add(nums1[i++]);
        }

        while(j<nums2.length){
            merged.add(nums2[j++]);
        }

        int n = merged.size();


        if(n%2 == 0){
            return (merged.get(n/2-1) + merged.get(n/2)) / 2.0 ;
        }

        else {
            return merged.get(n/2);
        }
    }
}
