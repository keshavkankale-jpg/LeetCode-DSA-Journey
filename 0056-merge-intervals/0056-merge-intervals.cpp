class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
    
    // Step 1: Nehami aadhi sort karun ghyaycha (start time nusar)
    sort(intervals.begin(), intervals.end());
    
    vector<vector<int>> result;
    
    // Step 2: Pahila interval direct result madhe tak
    result.push_back(intervals[0]);
    
    // Step 3: Dusrya interval pasun loop firav
    for(int i = 1; i < intervals.size(); i++) {
        // result madhla shevatcha interval kuthparyant ahe te check kar
        int last_end = result.back()[1]; 
        int current_start = intervals[i][0];
        int current_end = intervals[i][1];
        
        // Overlap ahe ka? (Jar current cha start, last chya end aat aala)
        if(current_start <= last_end) {
            // Overlap ahe! Mhanje merge karaychay.
            // Result madhlya shevatchya interval cha End update kar
            result.back()[1] = max(last_end, current_end);
        } else {
            // Overlap nahiye, mhanje ha navin swatantra interval ahe
            result.push_back(intervals[i]);
        }
    }
    return result;
}
    
        
    
};