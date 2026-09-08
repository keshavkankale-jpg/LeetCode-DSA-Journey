class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        int max_length=0;
        int prefix_sum=0;
        mpp[0]=-1;

        for(int i=0; i<n; i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
            prefix_sum+=nums[i];

            if(mpp.count(prefix_sum)){
                max_length=max(max_length, i-mpp[prefix_sum]);
            }
            else{
            mpp[prefix_sum]=i;
            }
        }
        return max_length;

    }
};