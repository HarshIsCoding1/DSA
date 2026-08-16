class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        int num=0;
        char op ='+';
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                num = num*10 + (s[i]-'0');
            }
          
            // if we encounter a operator
            if((s[i] !=' ' && !isdigit(s[i])) || i == s.size()-1){
                if(op == '+') st.push(num);
                else if(op =='-')st.push(-num);
                else if(op == '*'){
                    int a = st.top();
                    st.pop();
                    a*=num;
                    st.push(a);
                }
                else if(op == '/'){
                    int a = st.top();
                    st.pop();
                    a/=num;
                    st.push(a);
                }
                op = s[i];
                num=0;
            }
        
            
        

        }
        int sum=0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};