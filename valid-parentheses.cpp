class Solution {
public:
    bool isValid(string s) {
        std::stack <char> stack;
        bool was_add = false;
        for (int i = 0; i != s.size() ; i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
                was_add = true;
            }

            else if (!(stack.empty()) && stack.top() == '(' && s[i] == ')') {
                stack.pop();
            }
            else if (!(stack.empty()) && stack.top() == '[' && s[i] == ']') {
                stack.pop();
            }
            else if (!(stack.empty()) && stack.top() == '{' && s[i] == '}') {
                stack.pop();
            }
            else {
                return false;
            }
            
        }
    if (was_add == true)  
        return !(stack.size());

    else {
        return false;
    }
    }
};
