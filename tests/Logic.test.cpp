#include "catch/catch.hpp"

#include "logic.h"
TEST_CASE("Modus Ponens", "[single-file]")
{
    REQUIRE(modusPonens({"P", "Q"}, "P") == true);
    REQUIRE(modusPonens({"P", "Q"}, "Q") == false);
    REQUIRE(modusPonens({"P", "Q"}, "X") == false);
}