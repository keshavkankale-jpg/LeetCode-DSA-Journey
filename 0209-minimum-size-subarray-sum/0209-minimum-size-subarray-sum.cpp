class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n=nums.size();
       int left=0;
       int sum=0;
       int min_length=INT_MAX;

       for(int right=0; right<n; right++){
        sum=sum+nums[right];
        

        while(sum>=target){
           int current_length=right-left+1;

           min_length=min(min_length,current_length);

           sum=sum-nums[left];
           left++;
        }
        
        
       }
       if(min_length==INT_MAX){
        return 0;
       }
       return min_length;
        
    }
};