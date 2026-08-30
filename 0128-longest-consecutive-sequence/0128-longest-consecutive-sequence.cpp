class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count =1,maxcount =1;
        unordered_set<int> st(nums.begin() , nums.end());
        if(nums.empty()){
            return 0;
        }
        for(int x:st){
            if(st.find(x-1) == st.end()){
                count =1;
               int current = x;
            
            while(st.find(current + 1) != st.end()){
                current++;
                count++;
            }
            maxcount=max(maxcount,count);
            }
        }
        return maxcount;
    }
};