class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        int candidate;
        int count=0;

        for(int i=0; i<n; i++){
            int current_element=nums[i];

            if(count==0){
                candidate=current_element;
                count++;
            }
           else if(current_element==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;

        
    }
};