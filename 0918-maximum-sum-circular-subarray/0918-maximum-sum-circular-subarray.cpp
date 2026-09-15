class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();

        int total_sum=0;
        
        int max_sum=INT_MIN;
        int min_sum=INT_MAX;
        int current_min=0;
        int current_max=0;
        
        for(int i=0; i<n; i++){
            total_sum+=nums[i];

            current_max+=nums[i];
            max_sum=max(max_sum,current_max);
            if(current_max<0){
                current_max=0;
            }

            current_min+=nums[i];
            min_sum=min(min_sum,current_min);
            if(current_min>0){
                current_min=0;
            }

        }
        int sum=total_sum-min_sum;
             if(max_sum<0){
                return max_sum;
             }

             if(sum>max_sum){
                return sum;
             }
        return max_sum;
        
    }
};