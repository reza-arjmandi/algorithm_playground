#include <iostream>

int binary_search(int arr[], int l, int r, int x) {
    while(l <= r) {
        int m = l + (r - l) / 2;
        if(arr[m] == x) {
            return m;
        }
        if(arr[m] < x){
            l = m + 1;
        }
        else {
            l = m - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n-1, x);
    result == -1 ? std::cout << "Element is not present in array"
        : std::cout << "Element is present at index " << result << std::endl;
    return 0;
}