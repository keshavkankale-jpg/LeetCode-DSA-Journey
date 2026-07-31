class Solution {
public:
    void reverseString(vector<char>& s) {

        int n=s.size();
        for (int i=0; i<n; i++,n--) {
            swap(s[i], s[n-1]);
        }
    }
};