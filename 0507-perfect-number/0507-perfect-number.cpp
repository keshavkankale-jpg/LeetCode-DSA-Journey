class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1){
            return false;
        }
        int sum=1;
        int x=num;
        for(int i=2; i<num; i++){
           if(num%i==0){
            sum=sum+i;
           }
        }
        if(sum==x){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};