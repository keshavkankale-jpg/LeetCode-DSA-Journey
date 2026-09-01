class Solution {
private: vector<int> right;
         vector<int> left;
         vector<int> ans;
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        right = vector <int>(n,0);
        left = vector<int>(n,0);
        ans = vector <int>(n,0);


        right[0]=1;
        for(int i=1; i<n; i++){
            right[i]=right[i-1]*nums[i-1];
        }

        left[n-1]=1;
        for(int i=n-2; i>=0; i--){
            left[i]=left[i+1]*nums[i+1];
        }


        for(int i=0; i<n; i++){
            ans[i]=right[i]*left[i];
        }

        return ans;
    }
};