class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fib;
        fib.push_back(1);
        fib.push_back(1);
        
        int a = 1, b = 1;
        while (true) {
            int next_fib = a + b;
            if (next_fib > k) {
                break;
            }
            fib.push_back(next_fib);
            a = b;
            b = next_fib;
        }
        
        int count = 0;
        int n = fib.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (fib[i] <= k) {
                k -= fib[i];  
                count++;    
            }
            if (k == 0) {
                break;
            }
        }
        
        return count;
    }

};