#include "hw04f.h"

void prInc(double incItem[], char incDesc[][LEN], int isiz)
{
  /*
   * Prints out an income summary
   *
   * Args:
   *  incItem[] (double): An array holding the income amount
   *  incDesc[][] (char): A 2D array holding the income description
   *  isiz (int): The amount of income sources a user has
   * Returns:
   *  None
   */

  std::cout << "\n\n-- Yearly Income --\n";
  for (int i = 0; i < isiz; i++)
  {
    std::cout << "Income [" << i + 1 << "]: " << incDesc[i] << ", $" << incItem[i] << std::endl;
  }
}
