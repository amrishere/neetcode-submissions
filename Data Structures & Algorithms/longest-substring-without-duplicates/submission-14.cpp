class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if( s.size() == 0)
            return 0;
        set<char> set;
        set.insert(s[0]);
        int l = 0;
        int r = 1;
        int curMax = 1;
        int max = curMax;

        while(l < s.size() - 1 && r < s.size()){
            if(set.contains(s[r])){
                while(set.contains(s[r])){
                 set.erase(s[l]);
                 l++;
                }
            }else{
                curMax = 1 + r - l;
                set.insert(s[r]);
                r++;
               
            }
         
            max = (max < curMax)? curMax : max;
        }

           return max;
    }
 
};
