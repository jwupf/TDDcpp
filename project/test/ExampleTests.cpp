#include <gtest/gtest.h>

#include <string>

#include "Example.hpp"

using std::string;
using std::tuple;

class StringParameterAddParameterizedTests :public ::testing::TestWithParam<tuple<string, int>> {
};

TEST_P(StringParameterAddParameterizedTests, CheckIfItAdds) {
    auto expectedSum = std::get<1>(GetParam());
    auto input = std::get<0>(GetParam());
    ASSERT_EQ(Add(input), expectedSum);
}

INSTANTIATE_TEST_SUITE_P(
    StringWithMultipleValueParameterAddTests,
    StringParameterAddParameterizedTests,
    ::testing::Values(
        std::make_tuple("1,2,3",6),
        std::make_tuple("0,2,2",4)));


INSTANTIATE_TEST_SUITE_P(
    StringWithTwoValueParameterAddTests,
    StringParameterAddParameterizedTests,
    ::testing::Values(
        std::make_tuple("0,0",0),
        std::make_tuple("0,5",5),
        std::make_tuple("87,0",87),
        std::make_tuple("1,-2",-1),
        std::make_tuple("2,1",3),
        std::make_tuple("2,2",4)));

INSTANTIATE_TEST_SUITE_P(
    StringWithSingleValueParameterAddTests,
    StringParameterAddParameterizedTests,
    ::testing::Values(
        std::make_tuple("",0),        
        std::make_tuple("0",0),        
        std::make_tuple("-3",-3),
        std::make_tuple("7634",7634)));
