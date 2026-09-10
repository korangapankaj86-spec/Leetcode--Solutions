class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int position = n - 1;
        vector<int> ans(n);
        while (left <=right){
            if(abs(nums[left]) > abs(nums[right])){
                ans[position] = nums[left] * nums[left];
                left ++;
            }else{
                ans[position] = nums[right] * nums[right];
                right --;
            }
            position --;
        }
        return ans;
    }       
};