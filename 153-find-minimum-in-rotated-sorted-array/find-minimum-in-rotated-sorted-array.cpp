class Solution {
public:
    int findMin(vector<int>& a) {
        // a arotated sorted arr has 2 parts p1 and p2 increases till the intsxn then minimum then inc again , lets come from right and store the value
        // so if the guess is grater than the last element then it lies in the p1 part  pf the array and thats not the minimum ofcourse so we elimminate that part of search space , while if the guess is smaller than the last element then its in the p2 part of the array and it is a possible contender for the minimum element 
        int n = a.size();
        int l =0;
        int h = n-1;
        int ans = INT_MIN;
        while(l<=h){
            int g = l+(h-l)/2;
            if(a[g] > a[n-1]){
                l = g+1;
            }
            else{
                ans = a[g];
                h=g-1;
            }
        }
        return ans;
    }
};