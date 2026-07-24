class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n =a.size();
        int r=0;
        int w=0; 
        while(r<n){
            if(a[r] != 0){
                swap(a[r],a[w]);
                r++;
                w++;
            }
            else{
                r++;
            }
        }      
    }
};