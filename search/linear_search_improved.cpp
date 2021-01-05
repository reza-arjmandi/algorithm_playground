#include <vector>
#include <iostream>

void search(std::vector<int> arr, int search_Element) {
    int left = 0;
    int length = arr.size();
    int position = -1;
    int right = length - 1;

    for(left = 0; left <= right;) {
        if(arr[left] == search_Element) {
            position = left;
            std::cout << "Element found in array at " << 
                position + 1 << " position with " <<
                left + 1 << " attempt";
            break;
        }

        if(arr[right] == search_Element) {
            position = right;
            std::cout << "Element found in array at " << 
                position + 1 << " position with " <<
                length - right << " attempt";
            break;
        }
        left++;
        right--;
    }
    if (position == -1) 
        std::cout << "Not found in Array with "
             << left << " Attempt"; 
}

int main() 
{ 
    std::vector<int> arr{ 1, 2, 3, 4, 5 }; 
    int search_element = 5; 
      
    search(arr, search_element); 
} 