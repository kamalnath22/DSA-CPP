class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        lis=s.split()
        if(len(pattern)!=len(lis)):
            return False
        mp1={}
        mp2={}    
        for i in range(len(lis)):
            if(pattern[i] in mp1 and mp1[pattern[i]]!=lis[i]):
                return False
            if(lis[i] in mp2 and mp2[lis[i]]!=pattern[i]):
                return False    
            mp1[pattern[i]]=lis[i]
            mp2[lis[i]]=pattern[i]
        return True    


        
        