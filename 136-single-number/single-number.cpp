class Solution {
public:
    int singleNumber(vector<int>& a) {
        int x;
        if(a.size() == 1) return a[0];
        x = a[0]^a[1];
        for(int i=2;i<a.size();i++){
            x=x^a[i];
        }
        return x;
    }
};