#include <iostream>
int main()
{
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const int LIGHT_SPEED = 299792458;
    const double GRAVITY = 9.8;
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2*PI*radius;

    std::cout << circumference << "cm" << '\n';

    return 0;
}