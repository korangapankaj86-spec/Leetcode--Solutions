class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<int> mp;
        for(auto x : s){
            if(mp.find(x) != mp.end()){
                return x;
            }
            mp.insert(x);
        }
        return 0;
    }
};