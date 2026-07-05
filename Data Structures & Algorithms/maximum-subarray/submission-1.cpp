class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0];
        int max = curSum;

        for( int i = 1; i < nums.size(); i++){
         
            if(curSum < 0){
                curSum = nums[i];
            }else{
                curSum += nums[i];
            }
            max = (max < curSum)? curSum : max;
        }

        return max;
    }
};
