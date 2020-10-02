#include "hw04f.h"

void prSumm(double incTot, double expTot, double depTot)
{
  /*
   * Prints out a yearly tax summary based on the users income, expenses, and dependencies
   *
   * Args:
   *  incTot (double): The income yearly total
   *  expTot (double): The expense yearly total
   *  depTot (double): The total number of dependencies
   * Returns:
   *  None
   */

  double tax = 0.0;

  tax = ((incTot - expTot - (depTot * 3000.00)) * 0.18);

  std::cout << "\n\n-- Yearly Summary --\n"
            << "Total income: $" << incTot
            << "\nTotal expenses: $" << expTot
            << "\nDependencies: " << depTot
            << "\nTotal taxes due: $" << tax << std::endl;
}
