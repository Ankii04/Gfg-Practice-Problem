#include <stack>
#include <string>

class Solution {
  public:
    bool isBalanced(string& s) {
        std::stack<char> st;
        
        for (char ch : s) {
            // If it's an opening bracket, push to stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {
                // If stack is empty but we have a closing bracket
                if (st.empty()) return false;
                
                char top = st.top();
                // Check for matching pairs
                if ((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false; // Mismatched brackets
                }
            }
        }
        
        // If stack is empty, all brackets were matched correctly
        return st.empty();
    }
};