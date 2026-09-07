class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      int n=score.size();
      vector<pair<int ,int>> arr;
      for(int i=0;i<n;i++){
        arr.push_back({score[i],i});
      }
      sort(arr.begin(),arr.end());
      vector<string> ans(n);
      ans[arr[n-1].second]="Gold Medal";
      if(n>=2){
        ans[arr[n-2].second]="Silver Medal";
      }
      if(n>=3){
        ans[arr[n-3].second]="Bronze Medal";
      }
      for(int i=n-4;i>=0;i--){
        int rank = n-i;
        ans[arr[i].second]=to_string(rank);
      }
    return ans;
   }
};