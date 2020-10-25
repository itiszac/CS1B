#include "hw06.h"

int Sum(int A[5])
{
  int i;
  int sum = 0;
  for (i = 0; i < 5; ++i)
  {
    sum += A[i];
  }
  return sum;
}