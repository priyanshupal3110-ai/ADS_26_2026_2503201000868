#include <iostream>
using namespace std;

void cumulativeSum(int a[], int n, int sum = 0) {
    if (n == 0)
        return;

    sum += a[0];
    cout << sum << " ";

    cumulativeSum(a + 1, n - 1, sum);
}

int main() {
    int a[] = {2, 3, 6, 5, 10};

    cumulativeSum(a, 5);

    return 0;
}