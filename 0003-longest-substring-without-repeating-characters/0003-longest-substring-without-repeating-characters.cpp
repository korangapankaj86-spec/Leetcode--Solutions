class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxLength=0;
       int n=s.size();
       int i=0;
       int j=0;
       unordered_set<char> st;
       while(j<n){
        while(st.find(s[j]) != st.end()){
            st.erase(s[i]);
            i++;
        }
        st.insert(s[j]);
        maxLength=max(maxLength , j - i + 1);
        j++;
       }
       return maxLength;
    }
};