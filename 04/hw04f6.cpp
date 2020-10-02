#include "hw04f.h"

void prDep(char depNam[][LEN], char depRel[][LEN], int dsiz)
{
  /*
   * Prints out a summary of the users dependencies
   *
   * Args:
   *  depNam[][] (char): A 2D array holding the dependency names
   *  depRel[][] (char): A 2D array holding the dependency relationships
   *  dsiz (int): The total number dependencies a user has
   * Returns:
   *  None
   */

  std::cout << "\n\n-- Dependencies --\n";

  if (dsiz <= 0)
  {
    std::cout << "None\n";
    return;
  }

  for (int i = 0; i < dsiz; i++)
  {
    std::cout << "Dependency [" << i + 1 << "]: " << depNam[i] << ", " << depRel[i] << std::endl;
  }
}
