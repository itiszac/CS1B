#include "hw06.h"

int Sum(int *p, int k)
{
  int i;
  int sum = 0;
  for (i = 0; i < k; ++i)
  {
    sum += *(p + i);
  }
  return sum;
}