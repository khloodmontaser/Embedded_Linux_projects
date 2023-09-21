#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 6, 11, 9, 8, 10, 7, 3, 2, 1};
    int n;
    int deleteNum;

    std::cout << "Enter the number to delete: ";
    std::cin >> deleteNum;

    auto newEnd = std::remove(std::begin(arr), std::end(arr), deleteNum);


    if (newEnd != std::end(arr)) {
        n = std::distance(std::begin(arr), newEnd); 
        std::cout << "Number " << deleteNum << " deleted from the array." << std::endl;
    } 
    else {
        std::cout << "Number " << deleteNum << " not found in the array." << std::endl;
    }

    std::cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
