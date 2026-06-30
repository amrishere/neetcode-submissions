class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    
    int i = 0;
    int j = numbers.size() - 1;

    while(i <= numbers.size() - 2){
        int addup = numbers[i] + numbers[j];
        if(addup == target){
            return {i+1,j+1};
        }
        j--;
        if(i == j){
            i++;
            j = numbers.size() - 1;
        }
    }

    return {};
    }
};
