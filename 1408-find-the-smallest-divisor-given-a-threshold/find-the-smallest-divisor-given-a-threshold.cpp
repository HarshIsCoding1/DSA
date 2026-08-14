class Solution {
public:
    int maxi(vector<int>&a){
        int res = INT_MIN;
        for(int i=0;i<a.size();i++){
            res = max(a[i],res);
        }
        return res;
    }
    bool is_possible(vector<int>&a,int g,int t){
        int sum=0;
        for(int i=0;i<a.size();i++){
            if(a[i]%g == 0){
                sum += a[i]/g;
            }
            else{
                sum += ((a[i]/g) + 1);
            }
        }
        return sum<=t;
    }
    int smallestDivisor(vector<int>& a, int t) {
        int l=1;
        int h = maxi(a);
        int res=-1;
        while(l<=h){
            int g = l+(h-l)/2;
            if(is_possible(a,g,t)){
                res = g;
                h=g-1;
            }
            else{
                l=g+1;
            }
        }
        return res;
    }
};