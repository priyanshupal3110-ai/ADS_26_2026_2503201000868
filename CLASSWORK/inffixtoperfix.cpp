#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // Postfix expression
    string exp[] = {"54","6","+","7","4","-","*","9","/","35","15","+","+"};

    int n = sizeof(exp) / sizeof(exp[0]);

    for (int i = 0; i < n; i++)
    {
        string s = exp[i];

        // Check if operand
        if (isdigit(s[0]))
        {
            st.push(stoi(s));
        }
        else
        {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            switch (s[0])
            {
                case '+':
                    st.push(a + b);
                    break;
                case '-':
                    st.push(a - b);
                    break;
                case '*':
                    st.push(a * b);
                    break;
                case '/':
                    st.push(a / b);
                    break;
            }
        }
    }

    cout << "Result = " << st.top();

    return 0;
}