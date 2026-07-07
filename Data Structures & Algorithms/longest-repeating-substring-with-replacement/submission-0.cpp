class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int l = 0;
        int r = 0;
        int max = 0;
        int curMax;

    while(r < s.size() && l < s.size() -1 ){
            freq[s[r]] ++;

            int maxFreq = 0;

            for (auto& [ch, count] : freq) {
                maxFreq = std::max(maxFreq, count);
            }
            while(((r - l + 1 ) - maxFreq) > k){
                freq[s[l]] --;
                l++;
            }

            curMax = r - l + 1;
            max = (max < curMax)? curMax : max;
            r++;
        }
            return max;
    }


};
