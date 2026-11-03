class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        // Input: tokens = ["1","2","+","3","*","4","-"]
        // total = 1, temp = null
        // total = 1, temp = 2
        // total = 3, temp = null
        // total = 3, temp = 3
        // total = 9, temp = null
        // total = 9, temp = 4
        // total = 5, temp = null

        if (tokens.empty()) return 0;

        stack <int> stack;

        // iterate thtough tokesn 
        for (int i = 0; i < tokens.size(); ++i) {
            // if tokens[i] == '+' || '-' || '*' || '/'
            // pop last two items, do calc, and push result
            if (tokens[i] == "+") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();

                int total = b + a;
                stack.push(total);
            }
            else if (tokens[i] == "-") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();

                int total = b - a;
                stack.push(total);
            }
            else if (tokens[i] == "*") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();

                int total = b * a;
                stack.push(total);
            } 
            else if (tokens[i] == "/") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();

                int total = b / a;
                stack.push(total);
            }

            // else push on stack
            else {
                stack.push(stoi(tokens[i]));
            }
        }

        return stack.top();

        // total = 4, temp = null
        // total = 4, temp = 13
        // total = 4, temp = 135
        // total = 4/135, temp = null
        // total = 4/135, 

        // bad becuse we cant have a token in the following mannor
        // tokens=["4","13","5","/","+"]
        // [4]
        // [4, 13]
        // [4, 13, 5]
        // [4, 13/5]
        // [4(13/5)]

        /*
        string temp;
        // iterate through every token
        for (int i = 1; i < tokens.size(); ++i) {
            // if '+' || '-' || '*' || '/'
            // do calulation and clear temp
            if (tokens[i] == "+") {
                total += stoi(temp);
                temp.clear();
            }

            else if (tokens[i] == "-") {
                total -= stoi(temp);
                temp.clear();
            }

            else if (tokens[i] == "*") {
                total *= stoi(temp);
                temp.clear();
            }

            else if (tokens[i] == "/") { 
                total /= stoi(temp);
                temp.clear();
            }

            // hold onto int
            else 
                temp += tokens[i];
        }

        return total;

        */



    }
};
