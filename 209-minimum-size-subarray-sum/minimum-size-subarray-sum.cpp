class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        int l=0;
        int h=0;
        int sum =0;
        int res =INT_MAX;
        while(h<a.size()&&h>=l){
            sum += a[h];
            while(sum>=t){
                res = min(res,h-l+1);
                sum -= a[l];
                l++;
            }
            h++;
        }
        if(res == INT_MAX) return 0;
        return res;
    }
};