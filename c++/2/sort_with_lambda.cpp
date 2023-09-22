#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 6, 4, 9, 8, 10, 7, 3, 2, 1, 0};

    // ascending 
    auto ascending = [](int a, int b) { return a < b; };
    std::sort(std::begin(arr), std::end(arr), ascending);
    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // descending 
    auto descending = [](int a, int b) { return a > b; };
    std::sort(std::begin(arr), std::end(arr), descending);
    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
