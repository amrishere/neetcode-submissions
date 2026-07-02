class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0;
        int r = heights.size() - 1;

        int d = 0;
        int min_hight = 0;

        while(l < r){
            d = r - l;
            min_hight = (heights[l] <= heights[r])? heights[l]: heights[r];
            int curr_max = d * min_hight;
            max = (curr_max > max)? curr_max : max;

            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }

        return max;
    }
};
