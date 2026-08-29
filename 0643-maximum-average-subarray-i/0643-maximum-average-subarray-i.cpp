class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;

        for(int i=0; i<k; i++){
            sum=sum+nums[i];
        }
        double max_average=sum/k;

        for(int j=k; j<n; j++){
           
           sum=sum+nums[j]-nums[j-k];

           double current_average=sum/k;

           max_average=max(max_average,current_average);
        }
        return max_average;
        
    }
};