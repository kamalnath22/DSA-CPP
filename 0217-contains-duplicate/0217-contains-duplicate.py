class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        mp={}
        found=False
        for i in nums:
            mp[i]=mp.get(i,0)+1
        for i,j in mp.items():
            if(j>1):
                found=True
            
        return found    


        