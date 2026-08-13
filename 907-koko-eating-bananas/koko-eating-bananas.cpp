class Solution {
public:
    long long int maxi(vector<int>& a){
        long long int max = INT_MIN;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i] >max){
                max =a[i];
            }
        }
        return max;
    }
    long long int hours(vector<int>&a,long long int g){
        long long int n =a.size();
        long long int h=0;
        for(int i=0;i<n;i++){
            h+=a[i]/g;
            if(a[i]%g !=0){
                h++;
            }
        }
        return h;
    }
    int minEatingSpeed(vector<int>& a, int m) {
        long long int l=1;
        long long int h=maxi(a);
        long long int res=INT_MAX;
        while(l<=h){
            long long int g =l+(h-l)/2;
            long long int hour = hours(a,g);
            if(hour>m){
                l=g+1;
            }
            else{
                res = min(g,res);
                h=g-1;
            }
        }
        return res;
    }
};