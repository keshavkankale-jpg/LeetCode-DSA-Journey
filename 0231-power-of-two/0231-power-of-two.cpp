class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        int sum=0;
       while(n!=0){
        if(n&1){
            sum=sum+1;
        }
        n=n>>1;
       }
        if(sum==1){
            return true;
        }
        else{
            return false;
        }
         
    }
};