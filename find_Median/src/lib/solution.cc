#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<int> &inputs) {
  double median = 0;
  if (inputs.size() == 0) {
    return -1;
  }
  //intput size is even
  if(inputs.size()%2 == 0) {
    median = (inputs[inputs.size()/2 -1] + inputs[inputs.size()/2]) / 2.0;
  }else{//input size is odd
    median = inputs[(inputs.size()-1)/2];
  }
  return median;
}

