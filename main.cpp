/*
 * MIT/BSD Redistributable License
 * Author: https://github.com/infojg9
 */

#include <iostream>
#include "PointerToImplementation.h"

using namespace std;

int main() {

  Pimple::V1::PointerToImplementation obPimple("PimpleTestObject1");

  for (size_t i = 0; i < 99999; ++i) {
    cout << "*";
  }

  cout << "Hello, World!" << std::endl;
  return 0;
}
