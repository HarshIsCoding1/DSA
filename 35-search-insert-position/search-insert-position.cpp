class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int n=a.size();
        if(target>a[n-1]) return n;
        int l=0;
        int ans=0;
        int h=n-1;
        while(h>=l){
            int g =(h+l)/2;
            if(target > a[g]){
                
                l = g+1;
            }
            else if(target < a[g]){
                ans = g;
                h=g-1;
            }
            else{
                return g;
            }
        }
        return ans;
    }
};