#include "logic.h"

using namespace std;

bool modusPonens(pair<string, string> conditional, string antecedent)
{
    auto ret = false;

    if (conditional.first.compare(antecedent) == 0)
    {
        ret = true;
    }

    return ret;
}


bool modusTollens(pair<string, string> conditional, string consequence)
{
    auto ret = false;

    auto notQ = string("NOT ").append(conditional.second);

    if (notQ.compare(consequence )== 0)
    {
        ret = true;
    }

    return ret;
}
