class Solution {
public:
    bool checkDivisibility(int n) {
        int y=n;
        long long int sum=0;
        long long int product=1;
        while(n!=0){
            int x=n%10;

            sum=sum+x;

            product=product*x;

             n=n/10;
        }
        long long int ans=sum+product;

        if(y%ans==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};