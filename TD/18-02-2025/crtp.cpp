// Implementing the rectangle class using the CRTP principle (Curiously Recurring Template Pattern (CRTP) is a C++ design pattern that enables static (compile-time) polymorphism. )

#include <iostream>

// Base class using CRTP
template <typename Derived>
class Shape
{
public:
    int area() const
    {
        return static_cast<const Derived *>(this)->area_impl();
    }

    int perimeter() const
    {
        return static_cast<const Derived *>(this)->perimeter_impl();
    }
};

// Rectangle class inheriting from Shape with itself as template parameter
class Rectangle : public Shape<Rectangle>
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Implementation required by Shape
    int area_impl() const
    {
        return length * width;
    }

    int perimeter_impl() const
    {
        return 2 * (length + width);
    }
};

class Circle : public Shape<Circle>
{
private:
    int radius;

public:
    Circle(int r) : radius(r) {}
    int area_impl() const
    {
        return 3.14 * radius * radius;
    }
    int perimeter_impl() const
    {
        return 2 * 3.14 * radius;
    }
};
