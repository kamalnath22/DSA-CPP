class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string check=words[i];
            int l=0;
            int r=check.size()-1;
            string rev=check;
            while(l<r){
                swap(check[l],check[r]);
            l++;
            r--;
            }
            if(check==rev){
                return check;
                break;
            }
            else{
                continue;
            }


        }
        return {};
        
    }
};