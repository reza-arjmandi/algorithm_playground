#include <iostream>

int search(int arr[], int n, int x) {
    for(auto i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 10, 30, 15};
    int x = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << x << " is present at index " 
        << search(arr, n, x) << std::endl;
    return 0;
}