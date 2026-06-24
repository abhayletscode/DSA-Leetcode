#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> s;

        for(char ch : str) {

            // If opening bracket, push into stack
            if(ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            }
            else {
                // If stack empty, no matching opening bracket
                if(s.empty()) {
                    return false;
                }

                // Check matching pairs
                if((s.top() == '(' && ch == ')') ||
                   (s.top() == '{' && ch == '}') ||
                   (s.top() == '[' && ch == ']')) {
                    s.pop();
                }
                else {
                    return false;
                }
            }
        }

        // If stack is empty → valid
        return s.empty();
    }
};