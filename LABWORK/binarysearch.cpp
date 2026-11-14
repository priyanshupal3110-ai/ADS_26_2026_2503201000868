#include <iostream>
#include <stack>
#include <vector>

struct SearchRange {
    int low;
    int high;
};

int binarySearchWithStack(const std::vector<int>& arr, int target) {
    if (arr.empty()) return -1;

    std::stack<SearchRange> s;
    s.push({0, static_cast<int>(arr.size()) - 1});

    while (!s.empty()) {
        SearchRange current = s.top();
        s.pop();

        if (current.low > current.high) {
            continue;
        }

        int mid = current.low + (current.high - current.low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            
            s.push({mid + 1, current.high});
        } else {
            
            s.push({current.low, mid - 1});
        }
    }

    return -1;
}

int main() {
    std::vector<int> data = {2, 4, 7, 10, 15, 23, 45, 60, 88, 99};
    int target = 23;

    int index = binarySearchWithStack(data, target);

    if (index != -1) {
        std::cout << "Found " << target << " at index " << index << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}