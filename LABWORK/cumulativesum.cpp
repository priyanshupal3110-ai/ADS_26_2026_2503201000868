#include <iostream>
using namespace std;
int cumulativeSum(int a[], int n) {
    if (n == 1)
        return a[0];

    a[n-1] =cumulativeSum(a , n - 1)+a[n-1];
    return a[n-1];
}
int main() {
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    } 
    cout << cumulativeSum(a, 5) << endl;
    return 0;
}   