#include "rectangle.hpp"

#include <iostream> 

int main()
{
    using namespace Geometrie;

    //Rectangle r(2, 3):
    Rectangle r = Rectangle(2, 3);

    std::cout << r.aire() << " " << r.perimetre() << std::endl;

    Rectangle r2(4, 3);
    std::cout << "r comparé à r2 " << (r == r2) << std::endl;
}