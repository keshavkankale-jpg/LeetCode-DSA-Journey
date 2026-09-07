class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int> mpp;

       int count=0;
       int prefix_sum=0;
       
       mpp[0]=1;

       for(int i=0; i<n; i++){

        prefix_sum+=nums[i];
        int needed=prefix_sum-k;

        if(mpp.count(needed)){
            count+=mpp[needed];
        }

        mpp[prefix_sum]+=1;
      
       }

       return count;

    }
    
};