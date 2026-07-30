class NumArray {
public:
    vector<int> pfs;
    NumArray(vector<int>& a) {
        int n = a.size();
        pfs.resize(n);
        pfs[0] = a[0];
        for(int i=1;i<n;i++){
            pfs[i] = pfs[i-1]+a[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return pfs[right];
        return pfs[right] - pfs[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */