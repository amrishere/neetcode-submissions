class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

       

        for (int i = 0; i < nums.size(); i++){
            if( i > 0 && nums[i] == nums[i -1]){
                continue;
            }
             int l = i + 1;
             int r = nums.size() -1;
            while(l < r){
                int thresumm = nums[i] + nums[l] + nums[r];
                if(thresumm > 0){
                    r--;
                }else if( thresumm < 0){
                    l++;
                }else{
                    vector<int> temp ={nums[i], nums[l], nums[r]}; 
                    res.push_back(temp);
                    l++;
                    while( l < r && nums[l] == nums[l - 1]){
                        l++;
                    }
                }
            }
        }

        return res;
    }
};
