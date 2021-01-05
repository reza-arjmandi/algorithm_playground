#include <iostream>

int ternary_search(int arr[], int l, int r, int x) {
    if(r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = mid1 + (r - l) / 3;

        if(arr[mid1] == x) {
            return mid1;
        }

        if(arr[mid2] == x) {
            return mid2;
        }

        if(arr[mid1] > x) {
            return ternary_search(arr, l, mid1 - 1, x);
        }

        if(arr[mid2] < x) {
            return ternary_search(arr, mid2 + 1, r, x);
        }

        return ternary_search(arr, mid1 + 1, mid2 - 1, x);
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = ternary_search(arr, 0, n-1, x);
    result == -1 ? std::cout << "Element is not present in array"
        : std::cout << "Element is present at index " << result << std::endl;
    return 0;
}