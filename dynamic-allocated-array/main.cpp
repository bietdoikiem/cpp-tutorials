#include <iostream>

int main() {
  // NOTE: Dynamic allocated array is really special as it is located in the
  // heap, not the stack as the usual array. To be specific, the std::size
  // property will not be applicable on this type of array. Moreover, it's
  // declared by as pointer.
  const int ARR_SIZE = 8;
  int* pDynamicArr = new int[ARR_SIZE]{1, 2, 3, 4, 5, 6, 7, 8};
  // You can perform pointer arithmetic to retrieve elements instead of index
  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << "dynamicArr[" << i << "]: " << *pDynamicArr << std::endl;
    pDynamicArr++;
  }

  // Different types of declarations
  double* pSalaries =
      new double[ARR_SIZE];  // NOTE: This will contain garbage value
  double* pHeights =
      new double[ARR_SIZE]{};  // This will contain zero-value of double
  double* pScores = new double[ARR_SIZE]{
      1, 2, 3, 4};  // The first 1,2,3,4 will be initialized and the rest will
                    // be zero values.
  // REMEMBER to RELEASE arrays
  delete[] pDynamicArr;
  pDynamicArr = nullptr;
  delete[] pSalaries;
  pSalaries = nullptr;
  delete[] pHeights;
  pHeights = nullptr;
  delete[] pScores;
  pScores = nullptr;
  return 0;
}