#include <iostream>
#include <stack>
#include <string>
#include <cctype>   
using namespace std;

bool isPalindrome(const std::string& str) {
    std::stack<char> s;

    // Push all alphanumeric characters to the stack
    for (char c : str) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            s.push(std::tolower(static_cast<unsigned char>(c)));
        }
    }
    size_t i = 0;
    while (i < str.length()) {
        char c = str[i];
        if (std::isalnum(static_cast<unsigned char>(c))) {
            if (s.empty()) return false; // Should not happen if lengths match
            if (std::tolower(static_cast<unsigned char>(c)) != s.top()) {
                return false;
            }
            s.pop();
        }
        ++i;
    }
    return s.empty();
}

int main() {
    std::string test1 = "A man, a plan, a canal: Panama";
    std::string test2 = "race a car";
    std::string test3 = "No 'x' in Nixon";

    std::cout << "\"" << test1 << "\" -> " 
              << (isPalindrome(test1) ? "Palindrome" : "Not Palindrome") << std::endl;

    stcout << "\"" << test2 << "\" -> " 
              << (isPalindrome(test2) ? "Palindrome" : "Not Palindrome") << std::endl;

    cout << "\"" << test3 << "\" -> " 
              << (isPalindrome(test3) ? "Palindrome" : "Not Palindrome") << std::endl;

    return 0;
}