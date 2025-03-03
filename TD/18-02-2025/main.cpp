#include <iostream>
#include <cassert>
#include "crtp.cpp"

int main() {
    // Test 1: Basic construction and methods
    std::cout << "=== Test 1: Basic Rectangle Tests ===" << std::endl;
    Rectangle r1(5, 3);
    std::cout << "Rectangle(5,3) - Area: " << r1.area() << " (expected: 15)" << std::endl;
    std::cout << "Rectangle(5,3) - Perimeter: " << r1.perimeter() << " (expected: 16)" << std::endl;
    assert(r1.area() == 15);
    assert(r1.perimeter() == 16);

    // Test 2: Square-like rectangle
    std::cout << "\n=== Test 2: Square-like Rectangle ===" << std::endl;
    Rectangle r2(4, 4);
    std::cout << "Rectangle(4,4) - Area: " << r2.area() << " (expected: 16)" << std::endl;
    std::cout << "Rectangle(4,4) - Perimeter: " << r2.perimeter() << " (expected: 16)" << std::endl;
    assert(r2.area() == 16);
    assert(r2.perimeter() == 16);

    // Test 3: Zero dimension
    std::cout << "\n=== Test 3: Zero Dimension ===" << std::endl;
    Rectangle r3(0, 5);
    std::cout << "Rectangle(0,5) - Area: " << r3.area() << " (expected: 0)" << std::endl;
    std::cout << "Rectangle(0,5) - Perimeter: " << r3.perimeter() << " (expected: 10)" << std::endl;
    assert(r3.area() == 0);
    assert(r3.perimeter() == 10);

    // Test circle
    std::cout << "\n=== Test 4: Circle ===" << std::endl;
    Circle c1(5);
    std::cout << "Circle(5) - Area: " << c1.area() << " (expected: 78.5398)" << std::endl;
    std::cout << "Circle(5) - Perimeter: " << c1.perimeter() << " (expected: 31.4159)" << std::endl;
    assert(c1.area() == 78);
    assert(c1.perimeter() == 31);

    // Test 5: Compare different circles
    std::cout << "\n=== Test 5: Circle Comparisons ===" << std::endl;
    Circle c2(6);
    std::cout << "Circle1(5) area: " << c1.area() << std::endl;

    // Test 4: Compare different rectangles
    std::cout << "\n=== Test 5: Rectangle Comparisons ===" << std::endl;
    Rectangle r4(6, 2);
    std::cout << "Rectangle1(5,3) area: " << r1.area() << std::endl;
    std::cout << "Rectangle4(6,2) area: " << r4.area() << std::endl;
    std::cout << "Same area: " << (r1.area() == r4.area()) << " (expected: 1)" << std::endl;
    assert(r1.area() == r4.area());  // Both should have area 12

    std::cout << "\nAll tests passed successfully!" << std::endl;
    return 0;
}