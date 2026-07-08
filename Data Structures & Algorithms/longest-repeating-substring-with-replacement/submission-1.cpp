class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int max = 0;
        unordered_map<char,int> freq;
        while(r < s.size()){
            freq[s[r]]++;
            int mostFreq = 0;
            for(auto& [key,value] : freq){
                mostFreq = std::max(mostFreq,value);
            }
            while(((r-l +1 ) - mostFreq )> k){
                freq[s[l]]--;
                l++;
            }
            int curMax = (r-l +1 );
            max = std::max(curMax, max);
            r++;
        }

        return max;
    }
};
