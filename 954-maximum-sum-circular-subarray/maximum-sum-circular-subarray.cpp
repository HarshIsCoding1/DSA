class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // assumption1
        int bestans = nums[0];
        int res = nums[0];
        for(int i=1;i<nums.size();i++){
            int v1 = nums[i];
            int v2 = nums[i]+bestans;
            bestans = max(v1,v2);
            res = max(res,bestans);
        }
        // assm 2 - min lies on st part
        int bestans1 = nums[0];
        int res1 = nums[0];
        for(int i=1;i<nums.size();i++){
            int v1 = nums[i];
            int v2 = nums[i]+bestans1;
            bestans1 = min(v1,v2);
            res1 = min(res1,bestans1);
        }
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        if(res < 0) return res;
        int ans = sum - res1;
        return max(ans,res);

    }
};