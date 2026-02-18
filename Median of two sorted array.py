class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        import statistics
        t = nums1 + nums2
        k = sorted(t)
        m = statistics.median(k)
        return m
              
