class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        freq={}
        for i in magazine:
            freq[i]=freq.get(i,0)+1
        for i in ransomNote:
            if i not in freq:
                return False
            freq[i]-=1
            if freq[i]<0:
                return False    
        return True        
              


        