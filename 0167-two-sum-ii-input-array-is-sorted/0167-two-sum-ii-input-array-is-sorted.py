class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        mp={}
        for i in range(len(numbers)):
            complement=target-numbers[i]
            if complement in mp:
                return [mp[complement]+1,i+1]
            mp[numbers[i]]=i    
        return []