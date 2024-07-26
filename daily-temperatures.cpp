class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::stack <int> stack;

        vector <int> answ(temperatures.size(), 0);

        for (int i = 0; i != temperatures.size(); i++) {
            while (!stack.empty() && temperatures[stack.top()] < temperatures[i] ) {
                answ[stack.top()] = (i - stack.top());
                stack.pop();       
            }         
            stack.push(i);
        }

        return answ;
    }
};
