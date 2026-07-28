class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int z =0;
        int l=0;
        int h=0;
        int res = -1;
        while( h<nums.size() && l<=h){
            if(nums[h] == 0) z++;
            while(l<= h && z>k){
                if(nums[l] == 0) z--;
                l++;
            }
            res = max(res,h-l+1);
            h++;
        }
        return res;
    }
};