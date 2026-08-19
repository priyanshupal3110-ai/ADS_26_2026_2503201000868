#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    stack<int> fibStack;
    fibStack.push(0);
    fibStack.push(1);

    cout << "Fibonacci Series: ";
    cout << 0 << " " << 1 << " ";
    for (int i = 2; i < n; i++) {   
        int second = fibStack.top();  
        fibStack.pop();
        int first = fibStack.top();    
        fibStack.push(second);
        int next = first + second;
         fibStack.push(next);
        cout << next << " ";
    }
    return 0;
}