#include <iostream>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selection_sort(arr, n);  
    std::cout << "Sorted array: \n";  
    print_array(arr, n);  
    return 0;  
}