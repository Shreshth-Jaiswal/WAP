#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int number_t;

// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos
//           Use when there is clear benefit
//           Replaced with 'using' (work better w/ templates)

using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstname = "bro";
    number_t age = 19;

    std::cout << firstname << '\n';
    std::cout << age << '\n';

    return 0;
}