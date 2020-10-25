#include "hw06.h"

int main()
{
  int **d, s, i;
  d = new int *[5];

  for (i = 0; i < 5; ++i)
    d[i] = new int[8];

  for (int j = 0; j < 5; j++)
    for (int k = 0; k < 8; k++)
      d[j][k] = k;

  s = Sum(d, 5, 8);
  std::cout << "s: " << s << std::endl;

  for (i = 0; i < 5; ++i)
    delete[] d[i];

  delete[] d;
  return 0;
}