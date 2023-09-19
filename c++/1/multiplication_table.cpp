//5-multiplication table
#include <iostream>

int main(){
std::cout << "/* the multiplication table */" << std::endl;
for (int i = 1 ; i <= 12 ; i ++){
    for (int j = 1 ; j <= i ; j++)
        std::cout << i << " x " << j << " = " << i*j << std::endl;

}

}


