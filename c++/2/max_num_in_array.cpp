#include <iostream>
#include <algorithm>

int main(){

    int arr[5];
    for (int i = 0; i < 5; ++i)
    {
        std::cout <<"Enter the "<< i+1 << " element: ";
        std::cin >> arr[i] ;
    }
    std::cout << *std::max_element(std::begin(arr) , std::end(arr));

}
