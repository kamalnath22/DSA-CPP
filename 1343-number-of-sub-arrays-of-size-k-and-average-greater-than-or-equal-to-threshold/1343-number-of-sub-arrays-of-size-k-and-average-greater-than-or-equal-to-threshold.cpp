class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    { 
        int avg=0;
        int avgsum=0;
        int count=0;
        for(int i=0;i<k;i++){
            avgsum+=arr[i];
            

        }
        avg=avgsum/k;
        if(avg>=threshold){
            count++;
        }
        for(int i=k;i<arr.size();i++){
            avgsum+=arr[i];
            avgsum-=arr[i-k];
            avg=avgsum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;
        
    }
};