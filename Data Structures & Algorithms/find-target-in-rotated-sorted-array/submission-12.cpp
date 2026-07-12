class Solution {
public:
    int search(vector<int>& nums, int target) {
        return bsearch(nums, nums.size(), target);
    }

    int bsearch(vector<int>& nums, int size, int target){
        int l = 0;
        int r = size - 1;
        int mid = 0;

        while(l <= r){
            mid = l + (r - l)/2;
            if(nums[mid] == target){
                return mid;
            }

            if ( nums[l] <= nums[mid]){
                if(target > nums[mid]){
                    l = mid +1;
                }else if(target < nums[l]){
                    l = mid + 1;
                }else{
                    r = mid -1;
                }
            }else{
                if(target < nums[mid]){
                    r = mid -1;
                }else if(target > nums[r]){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }

            }
        }

        return -1;
    }
};
