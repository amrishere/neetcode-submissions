class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0;
        int r = l + 1;

        int d = 0;
        int min_hight = 0;

        while(l <= heights.size() - 2){
            d = r - l;
            min_hight = (heights[l] <= heights[r])? heights[l]: heights[r];
            int curr_max = d * min_hight;
            max = (curr_max > max)? curr_max : max;

            if(r == heights.size() - 1){
                l++;
                r = l + 1;
            }else{
                r++;
            }
        }

        return max;
    }
};
