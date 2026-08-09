class Solution {
public:
    int search(vector<int>& a, int target) {
        int n = a.size();
        int l =0;
        int h = n-1;
        while(l<=h){
            int g =(h+l)/2;
            if(a[g] == target) return g;
            if(a[g] > a[n-1]){
                if(a[g] < target){
                    l = g+1;
                }
                else{
                    if(target >= a[0]){
                        h=g-1;
                    }
                    else{
                        l=g+1;
                    }
                }
            }
            else{
                if(a[g]>target){
                    h=g-1;
                }
                else{
                    if(target>a[n-1]){
                        h=g-1;
                    }
                    else{
                        l = g+1;
                    }
                }
            }
        }
        return -1;
    }
};