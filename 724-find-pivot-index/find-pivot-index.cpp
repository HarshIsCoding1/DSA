class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n = a.size();
        vector<int> pfs(n,0);
        int sum =0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }
        pfs[0] = a[0];
        for(int i=1;i<n;i++){
            pfs[i] = pfs[i-1]+a[i];
        }
        for(int i=0;i<n;i++){
            if(pfs[i] - a[i] == sum-pfs[i]) return i;
        }
        return -1;
    }
};