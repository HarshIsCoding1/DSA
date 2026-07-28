class Solution {
public:
    int atmost_k(vector<int>&a, int k){
        unordered_map<int,int> f;
        int l=0;
        int h=0;
        int count =0;
        while(h<a.size() && h>=l){
            f[a[h]]++;
            while(f.size() > k){
                f[a[l]]--;
                if(f[a[l]] == 0)f.erase(a[l]);
                l++;
            }
            count += h-l+1;
            h++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>&a, int k) {
        return atmost_k(a,k) - atmost_k(a,k-1);
    }
};