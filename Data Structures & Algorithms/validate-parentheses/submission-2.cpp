class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0){
            return false;
        }
        stack<char> stack;
        char stackChar;

        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
            case ')':
                if(stack.empty()){
                    return false;
                }else{
                    stackChar = stack.top();
                    stack.pop();
                }
                if(stackChar != '(')
                    return false;
                break;
            case '}':
                if(stack.empty()){
                    return false;
                }else{
                    stackChar = stack.top();
                    stack.pop();
                }
                if(stackChar != '{')
                    return false;
                break;
            case ']':
                if(stack.empty()){
                    return false;
                }else{
                    stackChar = stack.top();
                    stack.pop();
                }
                if(stackChar != '[')
                    return false;
                break;
            default:
                stack.push(s[i]);
                break;
            }
           
        }

        if(!stack.empty())
            return false;

        return true;
    }
};
