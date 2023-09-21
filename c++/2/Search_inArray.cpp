//- create a function to search to the number in the array which number is taken from user
#include <iostream>
#include <algorithm>

int main() {
    int n;
    int arr[] = {5, 6, 11, 9, 8, 10, 7, 3, 2, 1, 0, 4, 12, 15, 16};

    std::cout << "Enter a number: ";
    std::cin >> n;
    int*  h = std::find(std::begin(arr), std::end(arr), n);
        if (h != std::end(arr)) {
        std::cout << "Number " << n << " found at position: "<< std::distance(std::begin(arr), h) << std::endl;
    } else {
        std::cout << "Number " << n << " not found" << std::endl;
    }
    return 0;
}
