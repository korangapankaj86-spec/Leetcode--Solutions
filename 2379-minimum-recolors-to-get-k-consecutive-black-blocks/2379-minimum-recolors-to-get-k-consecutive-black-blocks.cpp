class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0;
        int count = 0;
        int minw;
        for(int i = 0;i < k; i++){
            if(blocks[i] == 'W'){
                count ++;
            }
        }
        minw = count;
        for(int right = k; right < blocks.size();right++){
            if(blocks[left] == 'W'){
                count --;
            }
            left ++;
            if(blocks[right] =='W'){
                count ++;
            }
             minw = min(minw , count);
        }
        return minw;
    }
};