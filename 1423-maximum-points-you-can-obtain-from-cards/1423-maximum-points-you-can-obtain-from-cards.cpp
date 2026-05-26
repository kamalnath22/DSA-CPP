class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int lsum=0;
        int rsum=0;
        int maxpoint=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
            
        }
        maxpoint=max(maxpoint,lsum);
        int rightindex=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            
            rsum+=cardPoints[rightindex];
            rightindex--;
            maxpoint=max(maxpoint,lsum+rsum);
        }
        return maxpoint;
        
    }
};