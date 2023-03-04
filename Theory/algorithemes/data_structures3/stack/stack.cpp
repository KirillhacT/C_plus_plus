#include <iostream>
#include <stack>

using namespace std;

void example_stack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    while (!(st.empty())) {
        cout << st.top() << endl;
        st.pop();
    } 
}

bool isOpen(char ch) {
    return ch == '{' || ch == '[' || ch == '('; 
}

bool isPair(char open, char close) {
    return open == '{' && close == '}' ||
     open == '(' && close == ')' ||
     open == '[' && close == ']';
}

bool isBalanced(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (isOpen(s[i])) {
            st.push(s[i]);
        }
        else {
            if (!st.empty() && isPair(st.top(), s[i])) {
                st.pop();
            }
            else
                return false;
        }
    }
    return st.empty();
        
}


int main() {
    // example_stack();
    string s1 = "([])[]";
    cout << isBalanced(s1) << '\n';
}