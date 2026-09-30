class Solution {
public:
   void permutation(vector<int>& nums, vector<int>& current, vector<bool>& visited, vector<vector<int>>& result){
    if(nums.size()==current.size()){
        result.push_back(current);
        return;
    }

    for(int i=0; i<nums.size(); i++){
        if(visited[i]==false){
            visited[i]=true;
            current.push_back(nums[i]);
            permutation(nums, current, visited, result);

            current.pop_back();
            visited[i]=false;
        }
    }
   }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> visited(nums.size(),false);
        permutation(nums, current, visited, result);

        return result;
    }
};