class Solution {
public:
    int fib(int n) {
       int i=0,j=1;
       if(n==0){
        return 0;
       }

       for(int a=1; a<n; a++){
        int k = j+i;
        i=j;
        j=k;
       }
        return j;
    }
};