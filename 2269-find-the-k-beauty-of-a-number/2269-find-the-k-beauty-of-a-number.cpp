class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int left = 0;
        int count = 0;
        string s = to_string(num);
            string sub=s.substr(left,k);
            int x = stoi(sub);
            if(x!=0 && num % x == 0){
                count ++;
            }
        for(int right = k;right <s.size();right ++){
            left ++;
            string sub=s.substr(left,k);
            int x = stoi(sub);
            if(x!=0 && num % x == 0){
            count ++;
            }
        }
        return count;
    }
};