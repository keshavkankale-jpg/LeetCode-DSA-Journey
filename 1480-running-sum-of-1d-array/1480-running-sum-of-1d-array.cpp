class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int total_sum=0;
        for(int i=0; i<n; i++){
            nums[i]+=total_sum;
            total_sum=nums[i];
        }
        return nums;

        
    }
};