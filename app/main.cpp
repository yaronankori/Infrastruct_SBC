#include <iostream>

#include "my_lib.h"
#include "config.hpp"

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    std::cout << "Hello Yaron from main.cpp!" << '\n';

    FunctionPrintYaron();

    return (0);
};
