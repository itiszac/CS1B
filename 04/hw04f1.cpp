#include "hw04f.h"

double getInc(double incItem[], char incDesc[][LEN], int isiz)
{
  /*
   * Gets the inputs related to income from the user
   *
   * Args:
   *  incItem[] (double): An array holding the income amount
   *  incDesc[][] (char): A 2D array holding the income description
   *  isiz (int): The amount of income sources a user has
   * Returns:
   *  incTot (double): The sum of a users income
   */

  double incTot = 0.0;

  for (int i = 0; i < isiz; i++)
  {
    std::cout << "Income description: ";
    std::cin.getline(incDesc[i], LEN);

    std::cout << "Income amount: ";
    std::cin >> incItem[i];

    std::cin.clear();
    std::cin.ignore(100000, '\n');

    incTot += incItem[i];
  }

  return incTot;
}
