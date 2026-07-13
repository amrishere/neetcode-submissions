class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;
        int res = 1000;

        while(l <= r){
            mid = l + (r -l) /2;
            res = std::min(res, nums[mid]);
            if(nums[l] <= nums[r]){
                  res = std::min(res, nums[l]);
                  break;
            }
            if(nums[l] <= nums[mid]){
                l = mid + 1;
            }else{
                r = mid -1;
            }
        }

        return res;
    }
};
