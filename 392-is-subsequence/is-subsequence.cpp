class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return 0;
        int i=0,j=0;
        int count=0;
        while(i<s.size()){
            while( j<t.size() && t[j] != s[i]){
                j++;
            }
            if(j>=t.size()) return 0;
            i++;
            j++;
            count++;
        }
        if(count == s.size()) return 1;
        else return 0;
    }
};