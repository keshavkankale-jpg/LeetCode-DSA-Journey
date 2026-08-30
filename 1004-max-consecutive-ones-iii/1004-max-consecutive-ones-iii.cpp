class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int count_zero=0;
        int max_length=0;

        for(int right=0; right<n; right++){

            if(nums[right]==0){
                count_zero++;
            }
            while(count_zero>k){

              if(nums[left]==0){
                count_zero--;
              }
              left++;

            }
            
            max_length=max(max_length,right-left+1);

        }
        return max_length;
        
    }
};