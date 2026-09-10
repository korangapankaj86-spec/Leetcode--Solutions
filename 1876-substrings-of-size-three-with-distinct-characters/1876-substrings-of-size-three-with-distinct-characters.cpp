class Solution {
public:
    int countGoodSubstrings(string s) {
        int k=3;
        int left = 0;
        int right =k-1;
        int count = 0;
        unordered_map<char ,int> mp;
        for(int i=0;i<k;i++){
            mp[s[i]]++;
        }
        if(mp.size() == 3){
            count ++;
        }
        for(int right =k;right<s.size();right ++){
             mp[s[left]] --;
        if(mp[s[left]] == 0){
            mp.erase(s[left]);
        }
        left ++;
        mp[s[right]]++;
        if(mp.size() == 3){
            count ++;
        }
        }
        return count ;
    }
};