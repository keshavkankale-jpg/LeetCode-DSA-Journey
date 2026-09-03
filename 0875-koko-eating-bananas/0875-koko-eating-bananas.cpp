class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();

        int max_element=0;
        for(int i=0; i<n; i++){
            max_element=max(max_element,piles[i]);
        }
        int right=max_element;
        int left=1;

        while(left<right){
            double mid=left+(right-left)/2;

            int total_hours=0;
            for(int i=0; i<n; i++){
                double ans=ceil(piles[i]/mid);

                total_hours+=ans;
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