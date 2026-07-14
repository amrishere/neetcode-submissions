class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto n : matrix){
            int l = 0;
            int r = n.size() -1;
            int mid = 0;
            if( target > n[r] ){
                continue;
            }
            if(target < n[l]){
                return false;
            }
            while(l <=r){
                mid = l + (r -l)/2;
                if(n[mid] == target){
                    return true;
                }

                if(target > n[mid]){
                    l = mid + 1;
                }else{
                    r = mid -1;
                }
            }
        }

        return false;
    }
};
