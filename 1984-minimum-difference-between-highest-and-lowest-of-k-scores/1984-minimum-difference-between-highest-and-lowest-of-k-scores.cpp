class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int right = k -1;
        int left = 0 ;
        int diff = 0 ;
        int minDiff;
        sort(nums.begin() , nums.end());
        for(int i = 0; i<k;i++){
            diff = nums[right] - nums[left];
        }
        minDiff = diff;
        for( right = k;right < nums.size();right++){
            left++;
            diff = nums[right] - nums[left];
            minDiff = min( minDiff , diff);
        }
        return minDiff;
    }
};