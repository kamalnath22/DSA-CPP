class Solution {
public:
    bool checkvowel(char c){
        if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        else{
            return false;
        }
    }
    int maxVowels(string s, int k) {
        string sub="";
        int count=0;
        int maxcount=0;
        for(int i=0;i<k;i++){
            sub+=s[i];
            if(checkvowel(s[i])){
                count++;

            }
        }
        maxcount=max(count,maxcount);
        for(int i=k;i<s.length();i++){
            sub+=s[i];
            sub.erase(i-k,1);
            if(checkvowel(s[i-k])){
                count--;
            }
            if(checkvowel(s[i])){
                count++;
            }
            maxcount=max(count,maxcount);
        }
        return maxcount;
        
    }
};