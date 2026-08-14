class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans=[]
        count=0
        for i in nums:
            count=0
            for j in nums:
                if(j<i and j!=i):
                    count=count+1
            ans.append(count)
        return ans   





        