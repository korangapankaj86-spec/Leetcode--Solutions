class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> mp;
        for(char x : jewels){
            mp.insert(x);
        }
        int count=0;
        for(auto x : stones){
            if(mp.find(x) != mp.end()){
                count ++;
            }
        }
        return count;
    }
};