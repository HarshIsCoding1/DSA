class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        for(int i=0;i<a.size();i++){
            if(a[i]>0)st.push(a[i]);
            else{
                while(!st.empty() && st.top() >0 && -a[i]>st.top()){
                    st.pop();
                }
                if(!st.empty() && st.top()>0 && -a[i] == st.top()){
                    st.pop();
                    continue;
                }
                else if (st.empty() || st.top() < 0) {
                    st.push(a[i]);
                }
            }
        }
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};