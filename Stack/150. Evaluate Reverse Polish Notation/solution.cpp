class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;
        int a, b;

        for (auto token : tokens) {
            if (token =="+" || token =="-" || token =="*" || token =="/") {
                b = numbers.top();
                numbers.pop();
                a = numbers.top();
                numbers.pop();
                if (token =="+")
                    numbers.push(a+b);
                else if (token =="-")
                    numbers.push(a-b);
                else if (token =="*")
                    numbers.push(a*b);
                else
                    numbers.push(a/b);
            } else {
                numbers.push(stoi(token));
            }
        }
        return numbers.top();
    }
};
