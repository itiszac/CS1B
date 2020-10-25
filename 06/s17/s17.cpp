#include "hw06.h"

int main()
{
  int d[5][8];
  int s;
  // i n i t i a l i z e ∗d
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 8; j++)
      d[i][j] = j;
  }
  s = Sum(d);

  std::cout << "s: " << s << std::endl;

  return 0;
}