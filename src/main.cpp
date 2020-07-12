#include <iostream>
#include <utility>
#include <algorithm>

bool modus_ponens(std::pair<std::string, std::string> conditional, std::string antecedent, std::string test);

int main()
{

    std::pair<std::string, std::string> pair("a", "b");
    std::cout << "test" << std::endl;
    std::cout << "test" << std::endl;


    modus_ponens(pair, "a", "test");

    return 0;
}

bool modus_ponens(std::pair<std::string, std::string> conditional, std::string antecedent, std::string test)
{
    test = test.append("test");

    auto ret = false;

    if (conditional.first.compare(antecedent) == 0)
    {
        ret = true;
    }


    return ret;
}
