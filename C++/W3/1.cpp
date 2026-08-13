#include <iostream>
using namespace std;
int main()
{
    std::cout << "You are hacked\n";
    std::cout << "Yo!\n\n";
    std::cout << 9 << "\n";
    std::cout << 3*3 << "\n\n";
    std::cout << "OR you can end line with this ";
    cout << "but you have to use(using namespace std;)" << endl;
    std::cout << "You\\can \"use\" these\talso" << endl;

//  As you can see this is the single line comment.
/*
    This is a
    multi line 
    comment.
*/

    int a = 5, b = 6;
    float percentage = 80.65;
    double price = 9.99;
    char grade = 'A';
    string name = "Techi";
    bool light = true;
    
    std::cout << a << "+" << b << "=" << a+b << "\n";

    const int pi = 3.14159;             // When you do not want others (or yourself)
    const int gravity = 9.8;            // to change existing variable values

    int x;
    std::cout << "Enter a no.:";
    std::cin >> x;
    std::cout << "Your no. is " << x << "\n";

    float e = 12e3;
    double E = 12e4;
    std::cout << e << "\n" << E << "\n";

    return 0;
}