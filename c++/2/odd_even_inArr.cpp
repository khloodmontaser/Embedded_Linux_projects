#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "the Even numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            std::cout << arr[i]<<" " ;
        }
    }
    std::cout << std::endl;
    std::cout << "the Odd numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            std::cout << arr[i]<<" " ;
        }
    }
    std::cout << std::endl;

    return 0;
}
