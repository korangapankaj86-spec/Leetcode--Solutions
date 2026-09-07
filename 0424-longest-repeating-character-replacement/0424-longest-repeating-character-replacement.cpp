class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
         int maxFreq=0;
        int maxLen=0;
        unordered_map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            int length=j-i+1;
            maxFreq=max(maxFreq ,mp[s[j]]);
            int change=length - maxFreq;
            while(change > k){
                mp[s[i]]--;
                i++;
                length=j-i+1;
                change=length -maxFreq;
            }
            j++;
            maxLen=max(maxLen ,length);
        }
        return maxLen;
    }
};