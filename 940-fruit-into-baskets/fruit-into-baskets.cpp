class Solution {
public:
    int totalFruit(vector<int>& a) {
        unordered_map<int,int> f;
        int l=0;
        int res =INT_MIN;
        int h=0;
        while(h<a.size() && h>=l){
            f[a[h]]++;
            while(l<=h && f.size() > 2){
                f[a[l]]--;
                if(f[a[l]] == 0) f.erase(a[l]);
                l++;
            }
            res = max(h-l+1,res);
            h++;
        }
        return res;
    }
};