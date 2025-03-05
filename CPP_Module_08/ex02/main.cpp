#include "MutantStack.hpp"

bool isValid(std::string s) {
    MutantStack<char> st;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((s[i] == ')' && top == '(') || 
                (s[i] == '}' && top == '{') || 
                (s[i] == ']' && top == '['))
                st.pop();
            else return false;
        }
    }

    return st.empty();
}

int main() {
    {
        std::string s = "()[]{}";
        if (isValid(s))
            std::cout << BOLD_GREEN << s << " valid\n" << RESET;
        else
            std::cout << BOLD_RED << s << " not valid\n" << RESET;
    }
    {
        std::string s = "(]";
        if (isValid(s))
            std::cout << BOLD_GREEN << s << " valid\n" << RESET;
        else
            std::cout << BOLD_RED << s << " not valid\n" << RESET;
    }
    {
        std::string s = "([])";
        if (isValid(s))
            std::cout << BOLD_GREEN << s << " valid\n" << RESET;
        else
            std::cout << BOLD_RED << s << " not valid\n" << RESET;
    }
    return (0);
}

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }
