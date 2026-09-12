class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {

        int l =nums.size();
        vector<int> ans;

        for(int i=0;i<l;i++){


            for(int j=0;j<l;j++){
                if(abs(i-j)<=k && nums[j]==key){
                    ans.push_back(i);
                    break;

                }

            }
        }
        sort(ans.begin(),ans.end());

        return ans;
    }
};