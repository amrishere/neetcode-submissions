class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> matching = {
        {')', '('},
        {'}', '{'},
        {']', '['} };
        stack<char> stack;

        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                stack.push(c);
            }else{
                if(stack.empty() || stack.top() != matching[c]){
                    return false;
                }
                stack.pop();
            }
        }

        return stack.empty();
    }
};
