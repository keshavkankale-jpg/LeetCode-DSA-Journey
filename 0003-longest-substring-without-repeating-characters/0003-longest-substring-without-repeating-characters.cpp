class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int max_length=0;
        int hash[256]={0};

        for(int right=0; right<n; right++){
            hash[s[right]]++;
            while(hash[s[right]]>1){
                hash[s[left]]--;
                left++;
            }
            max_length=max(max_length,right-left+1);

        }
        return max_length;
        
        
    }
};