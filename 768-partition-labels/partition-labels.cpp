class Solution {
public:
    vector<int> partitionLabels(string a) {
        unordered_map<char,int> f;
        for(int i=0;i<a.size();i++){
            if(i>f[a[i]]){
                f[a[i]] = i;
            }
        }
        int i =0;
        int l =0;
        int LastIdx = f[a[0]];
        vector<int>ans;
        while(i<a.size()){
            while(i<=LastIdx){
                if(f[a[i]] > LastIdx){
                    LastIdx = f[a[i]];
                }
                i++;
            }
            ans.push_back(i-l);
            l =i;
            LastIdx = f[a[i]];
        }
        return ans;
    }
};