#include <iostream>

#include "logic.h"

int main()
{

    std::pair<std::string, std::string> test = {"a", "b"};

    std::cout << modus_ponens({"a", "b"}, "a");

    return 0;
}
