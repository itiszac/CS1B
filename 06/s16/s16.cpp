#include "hw06.h"

int main()
{
  int *d, s;
  d = new int[5];
  // i n i t i a l i z e ∗d
  for (int i = 0; i < 5; i++)
  {
    d[i] = i;
  }
  s = Sum(d, 5);

  std::cout << "s: " << s << std::endl;

  delete[] d;
  return 0;
}