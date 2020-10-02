#include "hw04f.h"

void clearBuffer()
{
  /*
   * Clears the buffer for cin
   *
   * Args:
   *  None
   * Returns:
   *  None
   */

  std::cin.clear();
  std::cin.ignore(100000, '\n');
}
