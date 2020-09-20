// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#include "math/my_power.h"
#else 
#include <math.h>
#endif

int main (int argc, char *argv[]) {
  if (argc < 3) {
    fprintf(stdout,"%s Version %d.%d\n",
            argv[0],
            Tutorial_VERSION_MAJOR,
            Tutorial_VERSION_MINOR);
    fprintf(stdout,"Usage: %s number\n",argv[0]);
    return 1;
    }

  double inputValue = atof(argv[1]);
  int inputN = atoi(argv[2]);

  #ifdef USE_MYMATH
    double outputValue = my_power(inputValue, inputN);
    // std::cout << "use my math" << std::endl;
    fprintf(stdout, "use my math\n");
  #else
    double outputValue = pow(inputValue, 2);
  #endif

  fprintf(stdout,"%g ^ %d = %g\n",
          inputValue, inputN, outputValue);
  return 0;
}