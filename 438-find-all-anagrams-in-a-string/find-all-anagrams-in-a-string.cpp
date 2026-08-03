class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pfreq(26,0);
        vector<int>wfreq(26,0);
        if(p.size()>s.size())return{};
        int i=0;
        int j=p.size()-1;
        for(int k=0;k<p.size();k++){
            pfreq[p[k]-'a']++;
        }
        for(int k=0;k<=j;k++){
            wfreq[s[k]-'a']++;
        }
        vector<int>res;
        while(j<s.size()){
            int count=0;
            for(int m=0;m<26;m++){
                if(wfreq[m] == pfreq[m]) count++;
            }
            if(count==26) res.push_back(i);
            j++;
            if(j<s.size()) wfreq[s[j]-'a']++;
            wfreq[s[i]-'a']--;
            i++;
        }
        return res;
    }
};
