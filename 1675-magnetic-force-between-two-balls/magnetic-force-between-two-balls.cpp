class Solution {
public:
    bool can_place(vector<int>&a,int m,int g){
        int ball =1;
        int prev =a[0];
        for(int i=1;i<a.size();i++){
            if(a[i] - prev >= g){
                ball++;
                prev = a[i];
            }
        }
        return ball >= m;
    }
    int maxDistance(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int n =a.size();
        int l =1;
        int h = a[n-1];
        int res =-1;
        while(l<=h){
            int g = l+(h-l)/2;
            if(can_place(a,m,g) !=1){
                h=g-1;
            }
            else{
                res = g;
                l=g+1;
            }
        }
        return res;
    }
};