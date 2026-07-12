class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int l = bsearch(nums, nums.size(), target, false);
      int r = bsearch(nums, nums.size(), target, true);

      return{l, r};
    }

    int bsearch(vector<int>& nums, int size, int target, bool rightBaised){
        int l = 0;
        int r = size - 1;
        int mid = 0;
        int num = -1;

        while(l <= r){
            mid = l + (r - l)/2;
            if(nums[mid] < target){
                l = mid + 1;
            }else if ( nums[mid] > target){
                r = mid - 1;
            }else{
                num = mid;
                if(rightBaised){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
        }

        return num;
    }
};