#include "hw04f.h"

void prExp(double expItem[], char expDesc[][LEN], int esiz)
{
  /*
   * Prints out a summary of a users yearly expenses
   *
   * Args:
   *  expItem[] (double): An array holding the expense amount
   *  expDesc[][] (char): A 2D array holding the expense description
   *  esiz (int): The total number expenses a user has
   * Returns:
   *  None
   */

  std::cout << "\n\n-- Yearly Expenses --\n";
  for (int i = 0; i < esiz; i++)
  {
    std::cout << "Expense [" << i + 1 << "]: " << expDesc[i] << ", $" << expItem[i] << std::endl;
  }
}
