class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0){
            return false;
        }
        set<int> set;

        for(int i : nums){
            set.insert(i);
        }

        if(set.size() != nums.size()){
            return true;
        }
        return false;
        
    }
};