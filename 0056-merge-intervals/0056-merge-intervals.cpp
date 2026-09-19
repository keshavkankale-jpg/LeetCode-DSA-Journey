class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> results;

        results.push_back(intervals[0]);

        for(int i=1; i<n; i++){
            int last_end=results.back()[1];
            int start=intervals[i][0];
            int end=intervals[i][1];

            if(start<=last_end){
                results.back()[1]=max(last_end,end);
            }
            else{
                results.push_back(intervals[i]);
            }
        }
        return results;
        
    }
};