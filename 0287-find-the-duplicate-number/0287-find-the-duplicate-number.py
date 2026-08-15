class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        mp = {}
        for i in nums:
            mp[i] = mp.get(i, 0) + 1
        for i in mp:
            if mp[i] > 1:
                return i
        return 1
