class Solution {
public:
    long long maximumSubarraySum(vector<int>& a, int k) {
        int i=0;
        int j=0;
        long long int sum=0;
        long long int res =0;
        unordered_map<int,int> f;
        int n = a.size();
        while(j<k){
            sum += a[j];
            f[a[j]]++;
            j++;
        }
        while(j<=n){
            if(f.size() == k){
                res = max(res,sum);
            }
            sum -= a[i];
            f[a[i]]--;
            if(f[a[i]] == 0) f.erase(a[i]);
            i++;
            
            if(j >= n) break;
            sum += a[j];
            f[a[j]]++;
            j++;
        }
        return res;
    }
};