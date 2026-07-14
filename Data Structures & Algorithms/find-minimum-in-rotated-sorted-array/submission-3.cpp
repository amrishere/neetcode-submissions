class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int res = nums[0];
        int mid = 0;

        while(l <= r){
            if(nums[l] <= nums[r]){
                res = std::min(res, nums[l]);
                break;
            }

            mid = l + (r -l)/2;
            if(nums[l] <= nums[mid]){
                res = std::min(nums[mid], res);
                l = mid + 1;
            }else{
                res = std::min(nums[mid], res);
                r = mid - 1;
            }
        }

        return res;
    }
};
