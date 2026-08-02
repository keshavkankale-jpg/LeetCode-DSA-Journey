class Solution {
public:
    double myPow(double x, int n) {
        int min=-pow(10,4);
        int max=pow(10,4);
        double ans=pow(x,n);
        if((ans>max)||(ans<min)){
            return 0;
        }
        return ans;
        
    }
};