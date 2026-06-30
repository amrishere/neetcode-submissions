class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    
    int i = 0;
    int j = numbers.size() - 1;
    int comput = 0;

    for(int i = 0; i < numbers.size(); i++){
        comput = target - numbers[i];
        int mid = biniary_search(numbers.size(), numbers, comput, i + 1);
        if(mid != -1){
            return {i +1, mid +1};
        }
    }

    return {};
    }


    int biniary_search(int n, vector<int>& numbers, int target, int l){
        int h = n - 1;
        int mid = l + (h-l)/2;

        while(l <= h){
            mid = l + (h-l)/2;
            if(numbers[mid] == target){
                return mid;
            }
            if(target > numbers[mid]){
                l = mid +1;
            }else{
                h = mid -1;
            }
        }

        return -1;
    }
};