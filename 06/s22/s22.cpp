#include "hw06.h"

int main()
{
  int *d, s;
  d = new int[5 * 8];
  if (!d)
    return -1;

  for (int i = 0; i < 5 * 8; i++)
    d[i] = i;

  s = Sum(d, 5, 8);
  std::cout << "s: " << s << std::endl;

  delete[] d; // ye s !
  return 0;
}