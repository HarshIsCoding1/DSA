class Solution {
public:
    bool ispalindrome(int l,int r,string s){
        while(l<=r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return 0;
            } 
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int l =0;
        int h = s.size()-1;
        while(l<=h){
            if(s[l] ==s[h]){
                l++;
                h--;
            }
            else{
                return (ispalindrome(l,h-1,s) || ispalindrome(l+1,h,s));
            }
        }
        return 1;
    }
};