class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {

        int l=nums.size();

        vector<int>ans;

        for(int i=0;i<l;i++){
            int ob=nums[i];
            int sc=0;


            for(int j=i+1;j<l;j++){

                if(ob % 2 ==0 ){
                   if(nums[j]%2!=0){
                    sc++;
                   }


                }
                else if(ob% 2!=0 ){
                    if(nums[j] % 2 ==0){
                        sc++;
                    }
                }

            }
            ans.push_back(sc);
        }
        return ans;
    }
};