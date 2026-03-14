class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int maxcount=0;
        int count=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        maxcount=count;
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i])){
                count++;
            }
            if(isvowel(s[i-k])){
                count--;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;

    }
};