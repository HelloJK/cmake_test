#include "MathFunctions.h"

double my_power(double input, int n) {
  int i = 0; 
  double result = 1.0;
  for (int i = 0; i < n; ++i) {
    result *= input;
  }
  return result;
}