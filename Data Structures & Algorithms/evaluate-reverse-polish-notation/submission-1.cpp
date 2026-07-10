class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> operations;
        int operand_return;
        for(int i = 0  ; i < tokens.size(); i++){
            if(tokens[i] != "+" &&tokens[i] != "-" 
              && tokens[i] != "/" && tokens[i] != "*"  ){
                operations.push(std::stoi(tokens[i]));
              }else{
                int operand2 = operations.top();
                operations.pop();
                int operand1 = operations.top();
                operations.pop();
                operand_return = operation(operand1, operand2, tokens[i]);
                operations.push(operand_return);
              }
        }

        return operations.top();
    }

    int operation(int operand1, int operand2, string oper){
       
            if( oper == "+")
                return operand1 + operand2;
            else if (oper == "-")
                return operand1 - operand2;
           else if (oper == "/"){
                if(operand1 == 0){
                    return 0;
                }
                return operand1 / operand2;
           }else if (oper == "*") 
                return operand1 * operand2;
            else
                std::cout<<"error no operation"<<std::endl;


        return -1000000;
    }
};
