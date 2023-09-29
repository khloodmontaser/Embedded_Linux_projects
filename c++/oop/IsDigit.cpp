#include <iostream>
#include <cctype>

void IsDigit(char c)
{
    if (std::isdigit(c))
        std::cout << c << " is a digit" << std::endl;
    else
        std::cout << c << " is not a digit" << std::endl;
}

int main()
{
    char c;
    std::cout << "Enter a character: " << std::endl;
    std::cin >> c;
    IsDigit(c);
    return 0;
}
