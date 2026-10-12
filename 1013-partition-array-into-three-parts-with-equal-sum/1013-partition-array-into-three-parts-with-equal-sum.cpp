class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
       int totalSum=0;
       int count =0;
       int currentSum=0;
       int target =0;
       for(int i=0;i<arr.size();i++){
        totalSum+=arr[i];
       }
       if(totalSum % 3!=0){
        return false;
       }
       target = totalSum / 3;
       for(int i=0;i<arr.size();i++){
         currentSum +=arr[i];
          if(currentSum == target){
            count ++;
            currentSum = 0;
            }
       }
       return count >=3;
    }
};