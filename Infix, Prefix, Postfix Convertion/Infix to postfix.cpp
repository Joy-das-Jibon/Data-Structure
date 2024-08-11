#include <bits/stdc++.h>
using namespace std;
stack<char> st;
string infix, postfix;

int precedence(char symbol)
{
    switch (symbol)
    {
        case '^':
            {
                return 3;
            }
        case '*':
        case '/':
            {
                return 2;
            }
        case '+':
        case '-':
            {
              return 1;
            }
        default:
            {
                 return 0;
            }

    }
}

void infixtopostfix()
{
    char symbol, next;
    for (int i = 0; i < infix.size(); i++)
        {
        symbol = infix[i];
        if (symbol != ' ' && symbol != '\t')
        {
            switch (symbol)
            {
                case '(':
                    {
                        st.push(symbol);
                         break;
                    }
                case ')':
                    {
                      while (!st.empty() && st.top() != '(')
                       {
                          postfix.push_back(st.top());
                           st.pop();
                       }
                         st.pop();
                          break;
                    }
                case '+':
                case '-':
                case '*':
                case '/':
                    {
                    while (!st.empty() && precedence(st.top()) >= precedence(symbol))
                    {
                        postfix.push_back(st.top());
                        st.pop();
                    }
                    st.push(symbol);
                    break;
                    }
                default:
                    {
                        postfix.push_back(symbol);
                    }

            }
        }
    }
    while (!st.empty())
    {
        postfix.push_back(st.top());
        st.pop();
    }
}

int main()
{
    cout << "Enter the infix expression\n";
    getline(cin, infix);
    infixtopostfix();
    cout << "The postfix expression is: " << postfix << endl;
}
