class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        for i in range(len(s)):
            mp[s[i]]=mp.get(s[i],0)+1 
        for i in range(len(t)):
            mp[t[i]]=mp.get(t[i],0)-1
        for j in mp.values():
            if(j!=0):
                return False
        return True                 
        