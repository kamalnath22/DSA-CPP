class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        mp = {}
        lis = []

        # Count nums1
        for num in nums1:
            mp[num] = mp.get(num, 0) + 1

        # Check nums2
        for num in nums2:
            if num in mp and mp[num] > 0:
                lis.append(num)
                mp[num] -= 1

        return lis