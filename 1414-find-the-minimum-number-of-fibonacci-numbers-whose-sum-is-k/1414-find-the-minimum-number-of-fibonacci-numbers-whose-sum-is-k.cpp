class Solution {
public:
    int findMinFibonacciNumbers(long long  k) {
        vector<long long >fibo(45,0);
        fibo[0]=1;
        fibo[1]=1;
        for(int i=2;i<45;i++)
        {
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
        cout<<fibo.back()<<endl;
        int cnt=0;
        while(k>0)
        {
            auto p=lower_bound(fibo.begin(),fibo.end(),k);
            if(*p==k)
            {
                return cnt+1;
            }
            else{
            
            p--;
            cnt++;
            k-=*p;}

        }
        return cnt;
        
    }
};