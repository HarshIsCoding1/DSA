class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        int l=0;
        int h=0;
        int count=0;
        int prod=1;
        if(k<=1) return 0;
        while(h<a.size() && l<=h){
            prod *= a[h];
            while(l<=h && prod>=k){
                prod /= a[l];
                l++;
            }
            count+= h-l+1;
            h++;   
        }
        return count;
    }
};