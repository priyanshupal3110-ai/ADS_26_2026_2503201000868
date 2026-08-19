#include <iostream>
#include <stack>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    stack<int> st;

    // Push both numbers onto the stack
    st.push(a);
    st.push(b);

    while (true) {
        int second = st.top();  // last element
        st.pop();
        int first = st.top();   // second last element
        st.pop();

        if (second == 0) {
            cout << "GCD = " << first << endl;
            break;
        }

        // Euclidean step: gcd(a, b) = gcd(b, a % b)
        st.push(second);
        st.push(first % second);
    }

    return 0;
}