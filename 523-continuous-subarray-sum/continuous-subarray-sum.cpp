class Solution {
public:
    bool checkSubarraySum(vector<int>& a, int k) {
        int pfs =0;
       
        
        unordered_map<int,int> f;
        f[0] = -1;
        for(int i=0;i<a.size();i++){
            pfs += a[i];
            int rem = pfs%k;
            if(f.find(rem) != f.end()){
                if(i-f[rem]>= 2){
                    return 1;
                }
            }
            else{
                f[rem] = i;
            }
            
        }
    return 0;
    }
};