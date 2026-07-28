class Solution {
public:
    int atmost_sum(vector<int>& a, int g){
        int l=0;
        int h=0;
        int sum =0;
        int count =0;
        while(h<a.size() && h>=l){
            sum += a[h];
            while(l<=h && sum>g){
                sum -= a[l];
                l++;
            }
            count += h-l+1;
            h++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& a, int g) {
        return atmost_sum(a,g) - atmost_sum(a,g-1);
    }
};