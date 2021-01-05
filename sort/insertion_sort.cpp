#include <iostream>

void insertion_sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    insertion_sort(arr, n);  
    print_array(arr, n);  
  
    return 0;  
}  