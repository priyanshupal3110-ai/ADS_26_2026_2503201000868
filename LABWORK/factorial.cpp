#include <iostream>
#include <stack>
using namespace std;

long long factorialUsingStack(int n) {
    if (n < 0) {
        throw invalid_argument("Factorial not defined for negative numbers.");
    }
    if (n == 0 || n == 1) return 1;
    stack<int> s;
    long long result = 1;
    for (int i = n; i >= 2; --i) {
        s.push(i);
    }
    while (!s.empty()) {
        result *= s.top();
        s.pop();
    }

    return result;
}
int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    try {
        cout << "Factorial of " << n << " is " << factorialUsingStack(n) << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}