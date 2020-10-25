#include "hw06.h"

int Sum(int *p, int r, int c)
{
  int j, k, sum = 0;
  for (j = 0; j < r; ++j)
  {
    for (k = 0; k < c; ++k)
    {
      sum += *(p + j * c + k);
    }
  }
  return sum;
}