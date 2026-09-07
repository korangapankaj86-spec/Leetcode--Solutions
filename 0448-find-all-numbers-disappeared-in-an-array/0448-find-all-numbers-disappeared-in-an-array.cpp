class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int number ;
        int correspondingIndex;
        for(int i=0;i<nums.size();i++){
            number =abs(nums[i]);
            correspondingIndex=number - 1;
            nums[correspondingIndex] = -abs(nums[correspondingIndex]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                result.push_back(i + 1);
            }
        }
        return result;
    }
};