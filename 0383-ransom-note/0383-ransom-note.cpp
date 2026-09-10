class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m=ransomNote.size();
        int n=magazine.size();

        if(n<m){
            return false;
        }
        int hash[26]={0};
        for(int i=0; i<n; i++){
            if(i<m){
            hash[ransomNote[i]-'a']++;
            }
           hash[magazine[i]-'a']--;
        }
        for(int i=0; i<m; i++){
           if(hash[ransomNote[i]-'a']>0){
            return false;
           }
        }
        return true;
        
    }
};