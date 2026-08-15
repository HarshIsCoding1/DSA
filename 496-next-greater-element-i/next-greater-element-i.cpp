class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2 = nums2.size();
        int n1 = nums1.size();
        stack<int>st;
        vector<int> res(n2);
        st.push(nums2[n2-1]);
        res[n2-1] =-1;
        for(int i=n2-2;i>=0;i--){
            if(st.top()>nums2[i]){
                res[i]=st.top();
                st.push(nums2[i]);
            }
            else{
                while(!st.empty() && st.top()<nums2[i]){
                    st.pop();
                }
                if(st.empty()){
                    res[i]=-1;
                    st.push(nums2[i]);
                }
                else{
                    res[i]=st.top();
                    st.push(nums2[i]);
                }
            }
        }
        unordered_map<int,int> f;
        for(int i=0;i<res.size();i++){
            f[nums2[i]] = res[i];
        }
        vector<int>ans(n1);
        for(int i=0;i<n1;i++){
            ans[i] = f[nums1[i]];
        }
        return ans;
    }
};