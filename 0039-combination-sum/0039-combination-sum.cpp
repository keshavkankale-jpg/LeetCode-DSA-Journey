class Solution {
public:
  void sumofelement(vector<int>& candidates, vector<int>& current, int target, int i, vector<vector<int>>& result){
        if(i==candidates.size()){
            return;
        }
        if(target==0){
            result.push_back(current);
            return;
        }
        if(candidates[i]<=target){
            current.push_back(candidates[i]);

            sumofelement(candidates, current, target-candidates[i], i, result);

            current.pop_back();

        }

        sumofelement(candidates, current, target, i+1, result);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;

        sumofelement(candidates, current, target, 0, result);

        return result;

    }
};