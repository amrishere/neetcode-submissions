
class MinStack {

public:
     std::stack<int> stack;
     std::stack<int> loweset;
    MinStack() {
       

        
    }
    
    void push(int val) {
        if(!loweset.empty()){
            if(loweset.top() >= val){
                loweset.push(val);
            }
        }else{
            loweset.push(val);
        }
        stack.push(val);
    }
    
    void pop() {
        if(stack.top() == loweset.top()){
            loweset.pop();
        }
        stack.pop();
        
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
       return loweset.top();
    }
};
