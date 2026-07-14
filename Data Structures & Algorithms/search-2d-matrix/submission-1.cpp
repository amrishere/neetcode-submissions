class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int l = 0;
        int r = matrix.size() - 1;
        int mid = 0;

        while(l <=r){
            mid = l + (r -l )/2;
            int l_n = 0;
            int r_n =  matrix[mid].size() - 1;

  
            if(matrix[mid][l_n] > target){
                r = mid - 1;
            }else if(matrix[mid][r_n] < target){
                l = mid + 1;
            }else{
                return bs(matrix[mid], matrix[mid].size(), target);
            }
        }

        return false;
    }

    bool bs(vector<int>& nums, int size, int target){
        int l = 0;
        int r = size -1;
        int mid = 0;

        while(l <=r){
            mid = l + (r -l)/2;
            if(nums[mid] == target){
                return true;
            }

            if(target > nums[mid]){
                l = mid + 1;
            }else{
                r = mid -1;
            }
        }

        return false;
    }
};
