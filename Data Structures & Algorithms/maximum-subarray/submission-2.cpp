class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    int maxSum = nums[0];
    int curSum = 0;

    for (int i = 0; i < nums.size(); i++){
        if (curSum < 0){
            curSum = nums[i]; //remove the negative prefix 
        }else{
            curSum += nums[i];
        }

        maxSum = (maxSum < curSum)? curSum : maxSum;
    }

    return maxSum;
    }
};
