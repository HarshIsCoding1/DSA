class Solution {
public:
    int maxi(vector<int>&a){
        int res=INT_MIN;
        for(int i=0;i<a.size();i++){
            res=max(res,a[i]);
        }
        return res;
    }
    double total_time(vector<int>&a,int g){
        double time=0;
        int n =a.size();
        for(int i=0;i<n;i++){
            if(a[i]%g == 0){
                time+=(a[i]/g);
            }
            else{
                if(i!=n-1){
                    time += (a[i]/g)+1;
                }
                else{
                    time+=(double)a[i]/g;
                }
            }
        }
        return time;
    }
    int minSpeedOnTime(vector<int>& a, double h) {
        int l=1;
        int r=1e7;
        int res = -1;
        if(a.size()-1>h)return -1;
        while(l<=r){
            int g = l+(r-l)/2;
            double time = total_time(a,g);
            if(time>h){
                l=g+1;
            }
            else{
                res = g;
                r=g-1;
            }
        }
        return res;
    }
};