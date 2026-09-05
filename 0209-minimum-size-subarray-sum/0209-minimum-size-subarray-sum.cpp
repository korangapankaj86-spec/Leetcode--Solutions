class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int i=0;
      int j=0;
      int sum=0;
      int minlen=INT_MAX;
      for(int i=0;i<nums.size();i++){
        sum += nums[i];
        while(sum >=target){
            minlen=min(minlen,i-j+1);
            sum=sum-nums[j];
            j++;        
        }
      } 
      return minlen==INT_MAX ? 0:minlen; 
    }
};