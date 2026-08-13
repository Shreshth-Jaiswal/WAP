#include <iostream>
int main()
{
    int x=5,z=1;   // Decleration and Assignment
    int y=6;
    int sum=x+y+z;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

// Integer (Whole numbers)
    int age=19;
    int year=2026;
    int days=19.7;

    std::cout << days << '\n';

// Double (Number Including Decimals)
    double sgpa=8.27;
    double price=1.99;
    double temperature=25.1;

    std::cout << sgpa << '\n';

// Single Character
    char grade='A';
    char initials='B';
    char currency='$';

    std::cout << currency << '\n';

// Boolean (true or false)
    bool power=true;
    bool forsale=false;

    std::cout << power << '\n';
    std::cout << forsale << '\n';

// String (objects that represents a sequence of text)
    std::string name="Shreshth";
    std::string address="D96, Beta 1";

    std::cout << name << '\n';
    std::cout << address << '\n';

// Multiple Data Type
    std::cout << "Hello My name is " << name << '\n';
    std::cout << "My age is " << age << " years old." << '\n';

    return 0;
}