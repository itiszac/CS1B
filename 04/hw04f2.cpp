#include "hw04f.h"

double getExp(double expItem[], char expDesc[][LEN], int esiz)
{
  /*
   * Gets the inputs related to users expenses
   *
   * Args:
   *  expItem[] (double): An array holding the expense amount
   *  expDesc[][] (char): A 2D array holding the expense description
   *  esiz (int): The total number expenses a user has
   * Returns:
   *  expTot (double): The sum of a users expenses
   */

  double expTot = 0.0;

  for (int i = 0; i < esiz; i++)
  {
    std::cout << "Expense description: ";
    std::cin.getline(expDesc[i], LEN);

    std::cout << "Expense cost: ";
    std::cin >> expItem[i];

    std::cin.clear();
    std::cin.ignore(100000, '\n');

    expTot += expItem[i];
  }

  return expTot;
}
