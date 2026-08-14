class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int r=a.size()-1;
        int c=0;
        while(r>=0 && c<a[0].size()){
            if(a[r][c] == target) return 1;
            if(a[r][c] < target){
                c++;
            }
            else{
                r--;
            }
        }
        return 0;
    }
};