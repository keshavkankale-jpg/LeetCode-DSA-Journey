class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        
        for(int pivot=0; pivot<n; pivot++){
            int left=0;
            int left_sum=0;
            while(left<pivot){
                left_sum=left_sum+nums[left];
                left++;
            }
            int right=pivot+1;
            int right_sum=0;
            while(right<n){
                right_sum=right_sum+nums[right];
                right++;
            }

            if(left_sum==right_sum){
                return pivot;
            }
        }
        return -1;
        
    }
};