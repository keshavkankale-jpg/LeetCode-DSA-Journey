class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int y=x;
        int ans=0;
        
        while(x!=0){
            int i=x%10;
            if(((INT_MAX/10)<ans)||((INT_MIN/10)>ans)){
                return false;
            }
            ans=(ans*10)+i;
            x=x/10;
        }
        if(ans==y){
            return true;
        }
        else{
            return false;
        }
        
    }
};