#include "catch/catch.hpp"

#include "logic.h"
TEST_CASE("Modus Ponens", "[single-file]")
{
    REQUIRE(modusPonens({"P", "Q"}, "P") == true);
    REQUIRE(modusPonens({"P", "Q"}, "Q") == false);
    REQUIRE(modusPonens({"P", "Q"}, "X") == false);
}

TEST_CASE("Modus Tollens", "[single-file]")
{
    REQUIRE(modusTollens({"P", "Q"}, "NOT Q") == true);
    REQUIRE(modusTollens({"P", "Q"}, "NOT P") == false);
    REQUIRE(modusTollens({"P", "Q"}, "Q") == false);
    REQUIRE(modusTollens({"P", "Q"}, "X") == false);
}