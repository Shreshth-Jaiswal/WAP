#include<iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main()
{
    using namespace first;

    std::cout << x << '\n';
    std::cout << first::x << '\n';                  // The two colon(first::x)is known as sculp resolution operater.
    std::cout << second::x << '\n';                 //      "       (second::x)             "

    using std::cout;
    using std::string;

    string name = "Bro";
    cout << "Hello " << name << '\n';

    return 0;
}