class Solution {
public:
    bool isvowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string sortVowels(string s) {
        vector<int>vowels;
        for(char c:s){
            if(isvowel(c)){
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(),vowels.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                s[i]=vowels[j];
                j++;
            }
        }
        return s;
        
    }
};