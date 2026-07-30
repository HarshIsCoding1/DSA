class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n = a.size();
        int count =0;
        unordered_map<int,int> f;
        int curr_sum = 0;
        f[0] = 1;
        for(int i=0;i<n;i++){
            curr_sum += a[i];
            
            if(f[curr_sum - k] != 0){
                count += f[curr_sum - k];
            }
            f[curr_sum]++;
        }
        return count;
    }
};