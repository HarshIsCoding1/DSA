class Solution {
public:
    int mySqrt(int x) {
        int h = x;
        int l = 0;
        int ans=0;
        while(h>=l){
            int g =(h+l)/2;
            if((long long)g*g <= x){
                ans = g;
                l=g+1;
            }
            else{
                h=g-1;
            }
        }
        return ans;
    }
};