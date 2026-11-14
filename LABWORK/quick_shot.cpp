#include<iostream>
using namespace std;
int partition(int a[], int low, int high) {
   int mid = low + (high - low) / 2;
   if (a[mid] < a[low]) {
       swap(a[mid], a[low]);
   } if (a[mid] > a[high]) {
       swap(a[mid], a[high]);
   } if (a[low] > a[high]) {
       swap(a[low], a[high]);
       swap(a[mid], a[high]);
       int pivot = a[high];
       int i = low - 1;
       int j = high;
       for(j=low; j < high; j++){
        if(a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
       }
       swap(a[i + 1], a[high]);
       return i + 1;
       void quickSort(int a[], int low, int high) {
    if (low <= high)
    return;
int p=partition(a, low, high);
    quickSort(a, low, p - 1);
    quickSort(a, p + 1, high);
}
int main() {
    int n;
    int a[15];
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}