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
            //are we left sorted array 
            if(nums[l] <= nums[mid]){
                if(nums[mid] < target){
                    l = mid + 1;
                }else if(target < nums[l]){
                    l = mid + 1;
                }else{
                    r = mid - 1; 
                }
            }else{
                if(nums[mid] > target){
                    r = mid - 1;
                }else if (nums[r] < target){
                     r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }

        return -1;
    }
};
