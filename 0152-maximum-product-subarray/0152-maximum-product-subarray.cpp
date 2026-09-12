class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        long long int max_product=INT_MIN;
        long long int prefix_product=1;
        long long int suffix_product=1;

        for(int i=0; i<n; i++){

             if(prefix_product==0){
            prefix_product=1;
           }
           if(suffix_product==0){
            suffix_product=1;
           }

            prefix_product*=nums[i];
            suffix_product*=nums[n-i-1];
             
           max_product=max(max_product,max(suffix_product,prefix_product));
        }
        return max_product;
        
    }
};