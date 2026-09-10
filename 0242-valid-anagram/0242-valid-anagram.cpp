class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();

        if(m!=n){
            return false;
        }
        int hash[26]={0};

        for(int i=0; i<n; i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;

        }
        for(int i=0; i<n; i++){
            if(hash[s[i]-'a']!=hash[t[i]-'a']){
                return false;
            }
        }
        return true;
    }
};
