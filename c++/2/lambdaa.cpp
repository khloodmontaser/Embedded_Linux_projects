//Simple Lambda: Write a lambda function to calculate the square of a given number.

#include <iostream>

int main() {
    int n ; 
    std::cout << "enter a number:" << std::endl;
    std::cin >> n ;
    auto lm = [](int x){
        return  x * x ;
    };
    std::cout << "square of " << n << " = " << lm(n) << std::endl;
    return 0;
}
