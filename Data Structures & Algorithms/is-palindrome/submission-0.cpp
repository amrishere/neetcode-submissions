class Solution {
public:
    bool isPalindrome(string s) {

        if (s.size() < 2){
            return true;
        }
        for (char &c : s) c = tolower(c);
        char alphabet[36] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','w','y', 'x', 'z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        unordered_map<char,int> Alphanumeric;
        int i = 0;
        for(char c: alphabet){
            Alphanumeric[c] = i;
            i++;
        }
        string s1;
        for(char c : s){
            if(Alphanumeric.find(c) != Alphanumeric.end()){
                s1 += c;
            }
        }

        string s2;
        for(int i = (int)s1.size() - 1; i >= 0; i--){
            s2 += s1.at(i);
        }

        if(s1 == s2){
            return true;
        }

        return false;
    }
};