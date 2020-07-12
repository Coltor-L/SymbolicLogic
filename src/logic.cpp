#include "logic.h"

bool modusPonens(std::pair<std::string, std::string> conditional, std::string antecedent)
{
    auto ret = false;

    if (conditional.first.compare(antecedent) == 0)
    {
        ret = true;
    }

    return ret;
}
