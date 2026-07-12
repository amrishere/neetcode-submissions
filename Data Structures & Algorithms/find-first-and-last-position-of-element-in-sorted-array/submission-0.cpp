class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;

        while(l <= r){
            mid = l + (r - l)/2;

            if(nums[mid] == target){
                while(nums[l] != target){
                    l++;
                }
                while(nums[r] != target){
                    r--;
                }
                return {l,r};
            }
            if(nums[mid] < target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }

        return{-1 , -1};
    }
};