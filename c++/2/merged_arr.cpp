#include <iostream>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;
    int mr[n3] = {0};

    for (int i = 0; i < n1; i++) {
        mr[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mr[n1 + i] = arr2[i];
    }
    std::cout << "after Merging: ";
    for (int i = 0; i < n3; i++) {
        std::cout << mr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
