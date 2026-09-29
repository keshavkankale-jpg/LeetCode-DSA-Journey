class Solution {
public:

    void subsetHelper(vector<int>& nums,int i,vector<int>& current, vector<vector<int>>& result){
        if(i==nums.size()){
            result.push_back(current);
            return;
        }
        current.push_back(nums[i]);

        subsetHelper(nums,i+1,current,result);

        current.pop_back();

        subsetHelper(nums,i+1,current,result);
    }


    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> current;
        subsetHelper(nums,0,current,result);

        return result;
        
    }
};