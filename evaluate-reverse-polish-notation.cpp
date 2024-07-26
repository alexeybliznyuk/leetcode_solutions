

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack <std::string> stack;


        int temp1 = 0;
        int temp2 = 0;

        for (int i = 0; i != tokens.size() ; i++) {

            /*
            if (isdigit(tokens[i][0])) {
            //if (tokens[i[0]] >= 48 && tokens[i[0]] <= 57) {
                stack.push(tokens[i][0]);

            }
            */



            if (tokens[i] == "+") {
                temp2 = stoi(stack.top());
                stack.pop();
                temp1 = stoi(stack.top());
                stack.pop();
                stack.push(std::to_string(temp1 + temp2));
            }
            else if (tokens[i] == "-") {
                temp2 = stoi(stack.top());
                stack.pop();
                temp1 = stoi(stack.top());
                stack.pop();
                stack.push(std::to_string(temp1 - temp2));
            }
            else if (tokens[i] == "*") {
                temp2 = stoi(stack.top());
                stack.pop();
                temp1 = stoi(stack.top());
                stack.pop();
                stack.push(std::to_string(temp1 * temp2));
            }
            else if (tokens[i] == "/") {
                temp2 = stoi(stack.top());
                stack.pop();
                temp1 = stoi(stack.top());
                stack.pop();
                stack.push(std::to_string(temp1 / temp2));
            }



            //else if (isdigit(tokens[i])) {
            else {
            //if (tokens[i[0]] >= 48 && tokens[i[0]] <= 57) {
                stack.push(tokens[i]);

            }
        }
    return stoi(stack.top());
    }
};
