//3-RIGHT angle triangle or not 
#include <iostream>
#include <cmath>

int isRAT(double a , double b , double c){
    bool n =0 ;
int maxi = std::max(std::max(a,b) , c);
if (a == maxi )
    return std::pow(a,2) == std::pow (b,2) + std::pow (c,2);
else if (b == maxi)
    return std::pow(b,2) == std::pow (a,2) + std::pow (c,2);   
else
    return std::pow(c,2) == std::pow (b,2) + std::pow (a,2);


}

int main(){
    double h , a , o ;
std::cout << "Enter the three sides of a triangle: " << std::endl;
std::cin >> h >> a  >> o ;

if (isRAT(h,a,o))
    std::cout << "it's a right angle triangle " << std::endl;
else
    std::cout << "it's not a right angle triangle" << std::endl;

}





