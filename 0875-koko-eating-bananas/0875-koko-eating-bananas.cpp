class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();

        int max_value=*max_element(piles.begin(),piles.end());
        int right=max_value;
        int left=1;

        while(left<right){
            int mid=left+(right-left)/2;

            int total_hours=0;
            for(int i=0; i<n; i++){
                total_hours+=(piles[i]+mid-1)/mid;
            }
            if(total_hours<=h){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
        
    }
};