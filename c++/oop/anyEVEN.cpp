#include <algorithm>
#include <iostream>
#include <vector>

int main(){
    std::vector<int> vc = {2, 3 , 4 , 5 , 6} ;
    if (std::any_of(vc.begin() , vc.end() , [](int i){return i%2 == 0 ;}))
    {
        std::cout << "this array contains even values" << std::endl;
    }
    else
    {
        std::cout << "this array doesn't contain any even values" << std::endl;
    }
      }
