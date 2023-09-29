#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vc = {2, 4, 6};

    if (std::all_of(vc.begin(), vc.end(), [](int i){ return i%2 == 0; })) {
        std::cout << "The elements are all even" << std::endl;
    } else {
        std::cout << "NOT all elements are even" << std::endl;
    }

    return 0;
}
