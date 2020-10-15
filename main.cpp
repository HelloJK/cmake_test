// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include "TutorialConfig.h"

#ifdef HAVE_POW
#include <math.h>
#else 
#include "math/MathFunctions.h"
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

  #ifdef HAVE_POW
    double outputValue = pow(inputValue, inputN);
    fprintf(stdout, "use sys math\n");
  #else
    double outputValue = my_power(inputValue, inputN);
    fprintf(stdout, "use my math\n");
  #endif

  fprintf(stdout,"%g ^ %d = %g\n",
          inputValue, inputN, outputValue);
  return 0;
}