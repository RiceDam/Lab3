//
// Created by Eric Dam on 2020-09-22.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "testTag1") {
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

