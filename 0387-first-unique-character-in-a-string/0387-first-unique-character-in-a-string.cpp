class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int , int > st;
        for(auto x : s){
            st[x]++;
        }
        for(int i=0;i<s.size();i++){
            if(st[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};