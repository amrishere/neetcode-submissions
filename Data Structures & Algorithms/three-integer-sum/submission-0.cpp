class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3){
            return {};
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        
        set<vector<int>> settemp;

        while(i <= (int)nums.size() - 3){
            int comp = -nums[i] - nums[j];
            long val = binary_search(nums.size(), nums, comp, j + 1);
            if(val != -1000000000){
                vector<int> temp = {nums[i], nums[j], (int)val};
                settemp.insert(temp);
            }
            
            if(j < (int)nums.size() - 2){
                j++;
            }else{
                i++;
                j = i + 1;
            }
        }

        vector<vector<int>> output;
        for(const vector<int>& v : settemp){
            output.push_back(v);
        }

        return output;
    }

    long binary_search(int n, vector<int>& nums, int target, int l){
        int h = n - 1;
        int mid = 0;
        long output = -1000000000;

        while(l <= h){
            mid = l + (h - l) / 2;
            if(nums[mid] == target){
                output = nums[mid];
                return output;
            }
            if(target > nums[mid]){
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }

        return output;
    }
};