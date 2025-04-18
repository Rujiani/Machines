#include <gtest/gtest.h>
#include "../Machines/A_Mealy.hpp"

#define w1 0
#define w2 1
#define z1 0
#define z2 1

vector<size_t> test_input = {z1, z2, z1, z2, z2, z1, z2, z1},
    test_output = {w1, w2, w1, w2, w2, w1, w2, w1};

vector<std::pair<size_t, size_t>> Mealy_Machine1 = 
    {{5, w1}, {8, w2}, {6, w2}, {4, w1}, {3, w1}, {6, w2}, {0, w2}, {2, w1}, {2, w1}, {3, w2}, {5, w1}, {7, w2}, {6, w2}, {1, w1}, {8, w1}, {5, w2}, {7, w1}, {0, w2}},
    Mealy_Machine2 =
    {};

ATM::Mealy_Machine M1(9, 2, Mealy_Machine1);
TEST(SumTests, test_name){
    EXPECT_EQ(M1.Process_sequence(test_input), test_output);
}