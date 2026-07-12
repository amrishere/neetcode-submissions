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
            if(nums[mid] < target){
                if(nums[r] < target){
                    r --;
                }else{
                    l = mid + 1;
                }
            }else{
                if(nums[l] > target){
                    l ++;
                }else{
                    r = mid - 1;
                }
            }
        }

        return -1;
    }
};
