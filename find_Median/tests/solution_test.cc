#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(FindMedianTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {1,2,3,3};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 2.5);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), -1);
}


